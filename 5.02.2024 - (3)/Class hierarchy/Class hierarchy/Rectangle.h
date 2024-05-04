#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
    Rectangle(int sideA, int sideB, int angle);
    void printInfo() override;
};

#endif