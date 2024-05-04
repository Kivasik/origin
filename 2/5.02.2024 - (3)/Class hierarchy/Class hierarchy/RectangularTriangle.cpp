#include "RectangularTriangle.h"
#include <iostream>

RectangularTriangle::RectangularTriangle(int sideA, int sideB, int sideC) : Triangle(sideA, sideB, sideC, 90, 0, 0) {}

void RectangularTriangle::printInfo() {
    std::cout << "Прямоугольный треугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
}