#include <iostream>
#include "Escuela.h"

int main() {
    Escuela *uno = new Escuela();
    Escuela *dos = new Escuela(new int(8), new int(45), new std::string("hola"));

    uno->setAlumnos(new int(78));
    uno->setProfesores(89);
    std::cout << *uno->getAlumnos() << std::endl;
    std::cout << uno->getProfesores() << std::endl;

    std::cout << *dos->getAlumnos() << std::endl;
    std::cout << dos->getProfesores() << std::endl;

    return 0;
}