#include "Person.h"
#include "Viola.h"
#include "Arco.h"

#include <iostream>

int main() {
    Person *one = new Person(20, 1.78);

    std::cout << one->getEdad() << std::endl;

    return 0;
}
