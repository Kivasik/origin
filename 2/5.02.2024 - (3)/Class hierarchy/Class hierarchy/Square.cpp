#include "Square.h"
#include <iostream>

Rhombus::Rhombus(int side, int angle) : Quadrilateral(side, side, side, side, angle) {}

void Rhombus::printInfo() {
    std::cout << "����:\n";
    std::cout << "�������: a=" << a << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}}