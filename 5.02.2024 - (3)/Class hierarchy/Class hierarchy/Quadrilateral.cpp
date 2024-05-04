#include "Quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(int sideA, int sideB, int sideC, int sideD, int angle) : a(sideA), b(sideB), c(sideC), d(sideD), A(angle), B(angle), C(angle), D(angle) {}

void Quadrilateral::printInfo() {
    std::cout << "��������������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}