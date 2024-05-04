#include "Square.h"
#include <iostream>

Rhombus::Rhombus(int side, int angle) : Quadrilateral(side, side, side, side, angle) {}

void Rhombus::printInfo() {
    std::cout << "Ромб:\n";
    std::cout << "Сторона: a=" << a << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}}