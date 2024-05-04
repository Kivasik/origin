// 05.02.2024 - Счётчик
#include <iostream>
#include "Counter.h"

int main() {
    char command;
    int initialValue = 1;

    setlocale(LC_ALL, "Russian");
    std::string response;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::cin >> response;

    if (response == "yes") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
    }
    else if (response != "no") {}

    Counter counter(initialValue);

    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        switch (command) {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            std::cout << counter.getCurrentValue() << std::endl;
            break;
        }
    } while (command != 'x');

    std::cout << "Вы завершили работу" << std::endl;

    return 0;
}