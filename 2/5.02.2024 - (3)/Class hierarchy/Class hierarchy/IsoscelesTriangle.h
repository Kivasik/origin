#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int sideA, int sideB, int sideC, int angleA, int angleB);
    void printInfo() override;
};

#endif