#include <iostream>
#include "CircleWithConstantMemberFunctions.h"
using namespace std;

int main() {
	Circle circle1;
	Circle circle2(3.0);


	if (circle1 < circle2)
	{
		cout << "The area of the circle with a radius of " << circle1.getRadius() << " is "
			<< circle1.getArea() << endl;
		cout << "The area of the circle with a radius of " << circle2.getRadius() << " is "
			<< circle2.getArea() << endl << endl;
	}
	else
	{
		cout << "The area of the circle with a radius of " << circle2.getRadius() << " is "
			<< circle2.getArea() << endl;
		cout << "The area of the circle with a radius of " << circle1.getRadius() << " is "
			<< circle1.getArea() << endl << endl;
	}

	circle2.setRadius(10);

	cout << "Circle2's radius has been set to: " << circle2.getRadius() << endl;

	if (circle1 < circle2)
	{
		cout << "The area of the circle with a radius of " << circle1.getRadius() << " is "
			<< circle1.getArea() << endl;
		cout << "The area of the circle with a radius of " << circle2.getRadius() << " is "
			<< circle2.getArea() << endl;
	}
	else
	{
		cout << "The area of the circle with a radius of " << circle2.getRadius() << " is "
			<< circle2.getArea() << endl;
		cout << "The area of the circle with a radius of " << circle1.getRadius() << " is "
			<< circle1.getArea() << endl;
	}

	return 0;
}