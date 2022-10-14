#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "figure.h"

class Rectangle : public Figure
{
    public:
        Rectangle(double width, double height);

        double calculateArea();

        double  calculatePerimeter();

        void showInfo();

    private:
            double width;
            double height;
};

#endif
