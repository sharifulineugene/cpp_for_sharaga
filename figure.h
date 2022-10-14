#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
    public:
        virtual double calculateArea() = 0;
        virtual double  calculatePerimeter() = 0;
        virtual void showInfo() = 0;

        virtual ~Figure() {} //деструктор
};

#endif
