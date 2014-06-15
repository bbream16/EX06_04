#include "CircleWithConstantMemberFunctions.h"

Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double newRadius)
{
	radius = newRadius;
}

double Circle::getArea() const
{
	return radius*radius*3.141592653589;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

bool Circle::operator<(Circle& that)
{
	return getRadius() < that.getRadius();
}