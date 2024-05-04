#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
protected:
    int a, b, c;
    int A, B, C;
public:
    Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
    void printInfo();
};

#endif