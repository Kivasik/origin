#include "Triangle.h"
#include 

Triangle::Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC)
    : a(sideA), b(sideB), c(sideC), A(angleA), B(angleB), C(angleC) {}

void Triangle::printInfo() {
    std::cout << "Треугольник:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
}