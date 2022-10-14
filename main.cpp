#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

#include <iostream>

int main()
{
	int size_array;
	std::cout << "Введите количество элементов массива: ";
	std::cin >> size_array;

	Figure* figures[size_array];
	int figureType;

	for (int i = 0; i < size_array; ++i)
	{
		std::cout << "Выберите тип фигуры, введите от 1 до 3 (1. Треугольник, 2. Прямоугольник, 3. Круг): ";
		std::cin >> figureType;
		Figure* figure;

		switch(figureType)
		{
			case 1:
			{
				figure = new Triangle();
				break;
			}

			case 2:
			{
				figure = new Rectangle(22, 10);
				break;
			}

			case 3:
			{
				figure = new Circle(5);
				break;
			}

		}

		figures[i] = figure;

	}

	for (int i = 0; i < size_array; ++i)
	{
		figures[i]->showInfo();
	}

	//destroy objects in heap
	for (int i = 0; i < size_array; ++i)
	{
		delete(figures[i]);
	}
	return 0;
}
