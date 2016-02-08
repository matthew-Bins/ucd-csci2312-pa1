#include<cmath>
#include "Point.h"

Point::Point() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

Point::Point(double X, double Y, double Z) {
	x = X;
	y = Y;
	z = Z;
}

void Point::setX(double newX) { x = newX; }
void Point::setY(double newY) { y = newY; }
void Point::setZ(double newZ) { z = newZ; }

double Point::getX() const { return x; }
double Point::getY() const { return y; }
double Point::getZ() const { return z; }

double Point::distanceTo(const Point& p) const {
	double a, b, c, answer;

	a = pow((p.x - x), 2);
	b = pow((p.y - y), 2);
	c = pow((p.z - z), 2);

	answer = sqrt(a + b + c);

	return answer;
}

Point::~Point() {}