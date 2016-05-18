The purpose of this project is to evaluate your ability to design and write
good code.  You may use either C++ or Java with the compilers specified above.

Your program should read from the standard input a list of points
and find the shortest closed path connecting the points, in the shortest time.
The input will be the x and y coordinates of the points as non-negative
integers separated by white space (space, tab, newline, etc.); end of file is 
indicated by Control-D for console input.  Any line of input beginning with # 
is a comment, which your program should ignore.

For example, if the input is

# test case 1
# 4 points p0, p1, p2, p3
0	0
0	1
1	1
1	2
^D

the output should be 

0
1
3
2
0
4.82843

since the shortest closed path is p0, p1, p3, p2, p0, and the path length is
4.82843.  Use exactly this format for output since it will be graded by
computer.

NOTE: The input file will contain up to 1000 points.

To simplify testing, put the input data in a text file named testcase1.txt and 
run

./a.out << testcase1.txt	(for C++)

or

java Project1 << testcase1.txt	(for Java)

The performance will be scored by scaling path length times execution time, 
with the smallest such product in the class getting the full 50 points for
best performance, and the largest such product in the class getting only 70%
of the 50 points (i.e., 35 points) for the worst performance.  If you write in
Java you will only be compared against the other Java programs, and similarly
for C++.

Follow a good style guide (e.g.,
http://google-styleguide.googlecode.com/svn/trunk/cppguide.html or
http://www.stroustrup.com/Programming/PPP-style.pdf for C++, or
http://www.oracle.com/technetwork/java/codeconvtoc-136057.html for Java).

Also follow these three rules:
1.  No more than one statement per line.
2.  No function longer than 24 lines (one terminal window).
3.  No line longer than 80 characters.

Name your program project1.cpp or Project1.java and submit this source file
using CSNET.