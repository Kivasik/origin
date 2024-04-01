// 15.02.24 - Остальные операции с дробями
#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}
    Fraction operator+(const Fraction& other) {
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return simplify(Fraction(newNumerator, newDenominator));
    }
    Fraction operator-(const Fraction& other) {
        int newNumerator = numerator * other.denominator - other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return simplify(Fraction(newNumerator, newDenominator));
    }
    Fraction operator*(const Fraction& other) {
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return simplify(Fraction(newNumerator, newDenominator));
    }
    Fraction operator/(const Fraction& other) {
        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return simplify(Fraction(newNumerator, newDenominator));
    }
    Fraction operator-() {
        return Fraction(-numerator, denominator);
    }
    Fraction& operator++() {
        numerator += denominator;
        return *this;
    }
    Fraction operator++(int) {
        Fraction temp = *this;
        numerator += denominator;
        return temp;
    }
    Fraction& operator--() {
        numerator -= denominator;
        return *this;
    }
    Fraction operator--(int) {
        Fraction temp = *this;
        numerator -= denominator;
        return temp;
    }
    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }

private:
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    Fraction simplify(const Fraction& fraction) {
        int common = gcd(fraction.numerator, fraction.denominator);
        return Fraction(fraction.numerator / common, fraction.denominator / common);
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    int num1, denom1, num2, denom2;
    std::cout << "Введите числитель дроби 1: ";
    std::cin >> num1;
    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> denom1;
    std::cout << "Введите числитель дроби 2: ";
    std::cin >> num2;
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> denom2;

    Fraction fraction1(num1, denom1);
    Fraction fraction2(num2, denom2);

    std::cout << "Результат операций:" << std::endl;
    std::cout << fraction1 << " + " << fraction2 << " = " << fraction1 + fraction2 << std::endl;
    std::cout << fraction1 << " - " << fraction2 << " = " << fraction1 - fraction2 << std::endl;
    std::cout << fraction1 << " * " << fraction2 << " = " << fraction1 * fraction2 << std::endl;
    std::cout << fraction1 << " / " << fraction2 << " = " << fraction1 / fraction2 << std::endl;

    std::cout << "++" << fraction1 << " * " << fraction2 << " = " << ++fraction1 * fraction2 << std::endl;
    std::cout << "Значение дроби 1 = " << fraction1 << std::endl;
    std::cout << fraction1 << "-- * " << fraction2 << " = " << fraction1-- * fraction2 << std::endl;
    std::cout << "Значение дроби 1 = " << fraction1 << std::endl;
    return 0;
}