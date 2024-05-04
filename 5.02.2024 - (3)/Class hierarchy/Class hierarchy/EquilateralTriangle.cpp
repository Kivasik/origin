#include "EquilateralTriangle.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(int side) : Triangle(side, side, side, 60, 60, 60) {
}

void EquilateralTriangle::printInfo() {
	std::cout << "Равносторонний треугольник:\n";
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
}