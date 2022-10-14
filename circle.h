#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle : public Figure
{
    public:
        Circle(double radius);

        double calculateArea();

        double  calculatePerimeter();

        void showInfo();

    private:
        double radius;
};

#endif
