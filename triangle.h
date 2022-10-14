#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"
class Triangle : public Figure
{
    public:
        //Triangle(double side, double height) : Figure(), side(side), height(height) {}
        // конструктор сама сделай, ибо я не ебу про входные данные
        Triangle();// а этот уберешь
        double calculateArea();

        double  calculatePerimeter();

        void showInfo();
    private:
        // double side;
        // double height; входные данные из конструктора
};

#endif
