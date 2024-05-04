#include "Triangle.h"
#include "RectangularTriangle.h"
#include "IsoscelesTriangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Quadrilateral.h"
#include "Rectangle.h"

int main() {
    Triangle triangle(10, 20, 30, 50, 60, 70);
    triangle.printInfo();

    RectangularTriangle rectangularTriangle(10, 20, 30);
    rectangularTriangle.printInfo();

    IsoscelesTriangle isoscelesTriangle(10, 20, 10, 50, 60);
    isoscelesTriangle.printInfo();

    Square square(20);
    square.printInfo();

    Parallelogram parallelogram(20, 30, 40);
    parallelogram.printInfo();

    Rhombus rhombus(30, 60);
    rhombus.printInfo();

    Quadrilateral quadrilateral(10, 20, 30, 40, 50);
    quadrilateral.printInfo();

    Rectangle rectangle(10, 20, 90);
    rectangle.printInfo();

    return 0;
}