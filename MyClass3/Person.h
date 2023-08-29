#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {

    public:
    //Atributos...
    int edad;
    float salario;
    string genero;
    string _comer;

    //Metodos...
    Person();
    void avanzar(bool);
    void verUbicacion(bool);
    void comer(bool);

};

#endif