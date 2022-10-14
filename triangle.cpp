#include "triangle.h"
#include <iostream>

Triangle::Triangle() : Figure() {}
double Triangle::calculateArea()
{
	return 0; //площадь
}

double  Triangle::calculatePerimeter()
{
	return 0; //периметр
}

void Triangle::showInfo()
//лучше сама определи))
{
	// cout << "Rectangle={width=" << this->width
	// << ", height=" << this->height
	// << ", area=" << this->calculateArea()
	// << ", perimeter=" << this->calculatePerimeter()
	// << "}" << endl;
	std::cout << "Треугольник" << std::endl;
}
