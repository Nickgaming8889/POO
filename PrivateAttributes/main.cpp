#include <iostream>
#include "Viola.h"
#include "Person.h"
#include "Bow.h"

int main() {
    Viola one = Viola(4);
    Viola five = Viola("C");
    Person two = Person(17, &one);
    Person three = Person("Nicolas", 4650.05, &one);
    Bow four = Bow(100);
    Bow six = Bow("madera");

    std::cout << "Tipo de Viola: " << one.getTipo() << std::endl;
    std::cout << "Tamanio Viola: " << one.getSide() << std::endl;
    std::cout << "Marca de Viola: " << one.getMarca() << std::endl;
    std::cout << "Afinacion: " << five.getAfinacion() << std::endl;
    std::cout << "Calidad del arco" << six.getMarca() << std::endl;
    std::cout << "Tension del Arco maxima: " << four.getTension() << "%" << std::endl;

    return 0;
}