#include "rectangle.h"
#include <iostream>


Rectangle::Rectangle(double width, double height) : Figure(), width(width), height(height) {}

double Rectangle::calculateArea()
{
	return width * height;
}

double  Rectangle::calculatePerimeter()
{
	return 2 * (width + height);
}

void Rectangle::showInfo()
//лучше сама определи))
{
	std::cout << "Rectangle={width=" << this->width
	<< ", height=" << this->height
	<< ", area=" << this->calculateArea()
	<< ", perimeter=" << this->calculatePerimeter()
	<< "}" << std::endl;
}
