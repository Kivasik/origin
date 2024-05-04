#include "EquilateralTriangle.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(int side) : Triangle(side, side, side, 60, 60, 60) {
}

void EquilateralTriangle::printInfo() {
	std::cout << "�������������� �����������:\n";
	std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
	std::cout << "����: A=" << A << " B=" << B << " C=" << C << "\n";
}