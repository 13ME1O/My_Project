#include <iostream>
#include "std.h"

int main() {
    int a, b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "Сумма: " << (a + b) << std::endl;
    std::cout << "Разность: " << (a - b) << std::endl;


    return 0;
}
