#ifndef RELOJ_H
#define RELOJ_H

#include <iostream>
using namespace std;

class Reloj {
    
    public:
    //Atributos
    int hora, minuto;
    string marca;
    string tipo;
    string color;

    //Metodos
    Reloj();
    bool iniciarCronometro (void);
    int darHora (void);
    void encerLuz (bool);
    void fijarHora(int, int);

};

#endif //RELOJ_H