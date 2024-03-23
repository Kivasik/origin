#ifndef RECTANGULARTRIANGLE_H
#define RECTANGULARTRIANGLE_H

#include "Triangle.h"

class RectangularTriangle : public Triangle {
public:
    RectangularTriangle(int sideA, int sideB, int sideC);
    void printInfo() override;
};

#endif