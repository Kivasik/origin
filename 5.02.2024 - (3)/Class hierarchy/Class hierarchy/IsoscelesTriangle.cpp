#include "IsoscelesTriangle.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(int sideA, int sideB, int sideC, int angleA, int angleB) : Triangle(sideA, sideB, sideC, angleA, angleB, angleA) {}

void IsoscelesTriangle::printInfo() {
    std::cout << "Равнобедренный треугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
}