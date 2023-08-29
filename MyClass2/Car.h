#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;


class Car
{

    //Atributos...
    public:
    int year;
    string tipo;
    string marca;

    private:
    int _potencia;

    //Metodos...
    Car();
    void acelerar(bool);
    void frenar(bool);
    bool girar(bool);

};


#endif