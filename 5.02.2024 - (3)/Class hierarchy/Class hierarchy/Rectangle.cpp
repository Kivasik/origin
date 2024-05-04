#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int sideA, int sideB, int angle) : Quadrilateral(sideA, sideB, sideA, sideB, angle) {}

void Rectangle::printInfo() {
    std::cout << "Прямоугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}