#include "Triangle.h"
#include 

Triangle::Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC)
    : a(sideA), b(sideB), c(sideC), A(angleA), B(angleB), C(angleC) {}

void Triangle::printInfo() {
    std::cout << "�����������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << "\n";
}