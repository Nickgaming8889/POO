#ifndef GPS_H
#define GPS_H

#include <iostream>
using namespace std;

class Gps
{
    //Atributos...
    public:
    float _longitud, _latitud;
    string _velocidad;

    //Metodos...
    Gps();
    void ubicacion(void);
    string mostrarVelocidad(void);

};

#endif