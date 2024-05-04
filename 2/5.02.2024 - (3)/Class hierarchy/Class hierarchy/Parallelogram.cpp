#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(int sideA, int sideB, int angle) : Quadrilateral(sideA, sideB, sideA, sideB, angle) {}

void Parallelogram::printInfo() {
    std::cout << "��������������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}