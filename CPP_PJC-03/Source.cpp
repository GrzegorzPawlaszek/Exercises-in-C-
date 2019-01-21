#include <math.h>
#include <iostream>

using namespace std;

struct Point
{
	int x;
	int y;
	int z;
}p1;

double fun(Point, Point);

int main() {
	p1 = { 0 , 0, 0 };
	Point p2 = { 1 , 1, 1 };
	
	cout << fun(p1, p2) << endl;

	system("pause");

}

double fun(Point p1, Point p2) {
	double result;
	result = sqrt( pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2) );
	return result;
}

