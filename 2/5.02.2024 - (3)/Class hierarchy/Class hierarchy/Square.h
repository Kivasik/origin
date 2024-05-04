#ifndef SQUARE_H
#define SQUARE_H

#include "Quadrilateral.h"

class Square : public Quadrilateral {
public:
    Square(int side);
    void printInfo() override;
};

#endif