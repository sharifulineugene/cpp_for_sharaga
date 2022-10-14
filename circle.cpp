#include "circle.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

Circle::Circle(double radius) : Figure(), radius(radius) {}

double Circle::calculateArea()
{
	return M_PI * radius * radius;
}

double  Circle::calculatePerimeter()
{
	return 2 * M_PI * radius;
}

void Circle::showInfo()
//лучше сама определи))
{
	std::cout << "Circle={radius=" << this->radius
	<< ", area=" << this->calculateArea()
	<< ", perimeter=" << this->calculatePerimeter()
	<< "}" << std::endl;
}
