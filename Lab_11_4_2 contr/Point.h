#pragma once
#include <iostream>

class Point
{
private:
	double x;
	double y;
public:

	Point();
	~Point();
	Point(double _x, double _y);
	double distanceToOrigin();
	double getX();
	double getY();
	friend std::ostream& operator<< (std::ostream& out, const Point& p);
	bool operator > (const Point& p);
	bool operator < (const Point& p);
};


