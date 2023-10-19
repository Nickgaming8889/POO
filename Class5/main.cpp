#include <iostream>
#include "Overload.h"

int main() {
    Overload one(8), two(4), three(7);

    three = one - two;
    std::cout << three.getX() << std::endl;

    three = one * two;
    std::cout << three.getX() << std::endl;

    std::cin >> one;

    three = one - two;
    std::cout << three.getX() << std::endl;

    return 0;
}