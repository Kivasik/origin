#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(int sideA, int sideB, int angle) : Quadrilateral(sideA, sideB, sideA, sideB, angle) {}

void Parallelogram::printInfo() {
    std::cout << "Параллелограмм:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}