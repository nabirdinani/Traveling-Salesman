#include "point.h"
#include <iostream> 
#include <fstream>
#include <sstream>
#include <vector>
#include <limits>
#include <ctype.h>

using namespace std;

vector<Point> read_points() {
	int i = 0;
	vector<Point> all_points;

	while(!cin.eof()) {			//reads input
		stringstream ss; 
		string s;
		Point pt;
		getline(cin , s);
		ss << s;
		if (s[0] != '#') {
			if(isdigit(s[0])){
				ss >> pt.xval >> pt.yval;
				pt.setIndex(i);
				all_points.push_back(pt);
				i++;
			}
		}
	}
	return all_points;
}

double spath_algo(vector<Point> all_points, vector<int> &path, Point &current)
{
	double total;
	int next;
	while (all_points.size() > 1) {
		double min = numeric_limits<double>::max();
		for(int i = 0; i < all_points.size(); i++) {
			double distance = current.distance(all_points[i]);
			if (distance < min) {
				min = distance;		//determines next closest point
				next = i;			//and the index of that point
			}
		}
		total += min;					
		path.push_back(current.getIndex());
		current = all_points[next];  		
		all_points.erase(all_points.begin() + next); 	//current is visited
	}

	return total;
}

int main() {	
	vector<Point> all_points(read_points());	//all_points points
	vector<int> path;  //visited points (in order)
	Point start;
	Point current;

	start = all_points[0];
	current = start;
	all_points.erase(all_points.begin());		//start is visited
	
	double total = spath_algo(all_points, path, current);
	
	double distance = current.distance(start);		//returns to start
	total += distance;
	path.push_back(0);
	
	for (int i = 0; i < path.size(); i++){ 
		cout << path[i] << endl; 
	}

	cout << "The path size is: " << path.size() << endl;
	
	cout << total << endl;
}
