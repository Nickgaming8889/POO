#include <iostream>
#include <iomanip>
#include "Test.h"

int main() {
    Test one(8, 7, 4), two(3, 9, 6), three(0, 0, 0);

    
    std::cout << one.getX() << "\n" << two.getY() << std::endl;
    three = one + two;
    std::cout << "Operator + :" << std::endl;
    std::cout << three.getR() << std::endl;

    three = one - two;
    std::cout << "Operator - :" << std::endl;
    std::cout << three.getR() << std::endl;

    return 0;
}