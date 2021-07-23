#include "Point.h"
#include <math.h>
#include <iostream>

Point::Point() : x{ 0 }, y{ 0 }
{
}

Point::~Point()
{
}

Point::Point(double _x, double _y)
{
	this->x = _x;
	this->y = _y;

}

double Point::distanceToOrigin()
{
	return sqrt(pow(this->x, 2) + pow(this->y, 2));
}

double Point::getX()
{
	return this->x;
}

double Point::getY()
{
	return this->y;
}

bool Point::operator>(const Point& p)
{
	Point target = p;
	if (this->distanceToOrigin() > target.distanceToOrigin()) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}

bool Point::operator<(const Point& p)
{
	Point target = p;
	if (this->distanceToOrigin() < target.distanceToOrigin())
	{
		return true;
	}
	else
	{
		return false;
	}
}

std::ostream& operator<< (std::ostream& out, const Point& p)
{
	Point target = p;
	out << "x = " << target.getX() << ", " << "y = " << target.getY() << std::endl;
	return out;
}
