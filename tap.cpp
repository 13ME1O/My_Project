#include <iostream>
#include "std.h"

int main() {
    int a, b;
    std::cout << "������� ������ �����: ";
    std::cin >> a;
    std::cout << "������� ������ �����: ";
    std::cin >> b;

    std::cout << "�����: " << (a + b) << std::endl;
    std::cout << "��������: " << (a - b) << std::endl;


    return 0;
}
