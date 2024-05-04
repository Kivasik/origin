#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Shape.h"

class Quadrilateral : public Shape {
protected:
    int a, b, c, d;
    int A, B, C, D;

public:
    Quadrilateral(int sideA, int sideB, int sideC, int sideD, int angle);
    void printInfo() override;
};

#endif