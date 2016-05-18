#include <math.h>
#include <iostream>

using namespace std;

class Point {
public:
        int index;
        double xval, yval;
        
        Point(double x1 = 0.0, double y1 = 0.0) { //constructor
            xval = x1;
            yval = y1;
        }
        
        void setIndex(int i) { index = i; }
        int getIndex() { return index; }

        double distance(Point next) {
                double xdist = pow((xval - next.xval), 2); //distance formula
                double ydist = pow((yval - next.yval), 2);
                return sqrt((xdist) + (ydist));
        }
};




