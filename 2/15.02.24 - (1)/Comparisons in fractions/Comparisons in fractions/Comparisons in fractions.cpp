﻿// 15.02.24 - Сравнения в дробях
#include <iostream>

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator)
        : numerator_(numerator), denominator_(denominator) {}
    bool operator==(const Fraction& other) const
    {
        return (numerator_ * other.denominator_ == other.numerator_ * denominator_);
    }
    bool operator!=(const Fraction& other) const
    {
        return!(*this == other);
    }
    bool operator<(const Fraction& other) const
    {
        return (numerator_ * other.denominator_ < other.numerator_ * denominator_);
    }
    bool operator>(const Fraction& other) const
    {
        return (numerator_ * other.denominator_ > other.numerator_ * denominator_);
    }
    bool operator<=(const Fraction& other) const
    {
        return (*this < other || *this == other);
    }
    bool operator>=(const Fraction& other) const
    {
        return (*this > other || *this == other);
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Fraction f1(4, 3);
    Fraction f2(4, 3);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? "!= " : " not!= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}