#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;


class Auto
{

    //Atributos...
    public:
    int year;
    string tipo;
    string marca;
    
    //Metodos...
    Auto();
    void acelerar(bool);
    void frenar(bool);
    void girar(bool);
    
    private:
    int _potencia;

};


#endif