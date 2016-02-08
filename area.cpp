#include<cmath>
#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c)
{
	double AB, BC, CA, s, answer;

	AB = a.distanceTo(b);
	BC = b.distanceTo(c);
	CA = c.distanceTo(a);

	s = (AB + BC + CA) / 2; //find s for herons formula

	//find herons formula
	answer = sqrt(s * ((s - AB) * (s - BC) * (s - CA)));

	return answer;
}