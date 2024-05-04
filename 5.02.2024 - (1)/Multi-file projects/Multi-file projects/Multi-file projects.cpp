// 05.02.2024 - «Многофайловые проекты и библиотеки»
#include <iostream>
#include "math_functions.h"

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    int operation;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - степень): ";
    std::cin >> operation;

    switch (operation) {
    case 1:
        std::cout << "Результат: " << add(num1, num2) << std::endl;
        break;
    case 2:
        std::cout << "Результат: " << subtract(num1, num2) << std::endl;
        break;
    case 3:
        std::cout << "Результат: " << multiply(num1, num2) << std::endl;
        break;
    case 4:
        std::cout << "Результат: " << divide(num1, num2) << std::endl;
        break;
    case 5:
        std::cout << "Результат: " << num1 << " в степени " << num2 << " = " << power(num1, num2) << std::endl;
        break;
    default:
        std::cout << "Недопустимая операция!" << std::endl;
    }

    return 0;
}