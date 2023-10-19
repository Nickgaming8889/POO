#include <iostream>
#include "Overload.h"

int main() {
    Overload one(8), two(4), three(7);

    three = one - two;
    std::cout << three.getX();

    three = one * two;
    std::cout << three.getX();

    std::cin >> one;

    three = one - two;
    std::cout << three.getX();

    return 0;
}