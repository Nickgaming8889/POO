#include <iostream>
#include "ClassA.h"
#include "ClassB.h"

int main() {

    //Primera Clase (Suma)
    std::cout << "Clase A" << std::endl;
    ClassA one(2, 6, 0);

    std::cout << "Valor 1: " << one.getNum1() << std::endl;
    std::cout << "Valor 2: " << one.getNum2() << std::endl;
    std::cout << "Resultado 1: " << one.getResult() << std::endl;

    one.setNum1(5);
    one.setNum2(8);

    std::cout << "Valor 1: " << one.getNum1() << std::endl;
    std::cout << "Valor 2: " << one.getNum2() << std::endl;

    int r = one.getNum1() + one.getNum2();
    one.setResult(r);

    std::cout << "Resultado 2: " << one.getResult() << std::endl << std::endl;

    //Segunda Clase (Resta)
    std::cout << "Clase B" << std::endl;
    ClassB two(12, 45, 0);

    std::cout << "Valor 1: " << two.getNum1() << std::endl;
    std::cout << "Valor 2: " << two.getNum2() << std::endl;
    std::cout << "Resultado 3: " << two.getResult() << std::endl;

    two.setNum1(14);
    two.setNum2(4);

    std::cout << "Valor 1: " << two.getNum1() << std::endl;
    std::cout << "Valor 2: " << two.getNum2() << std::endl;

    r = two.getNum1() - two.getNum2();
    two.setResult(r);

    std::cout << "Resultado 4: " << two.getResult() << std::endl;

    return 0;
}