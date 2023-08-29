#include <iostream>
#include "Gps.h"

using namespace std;

int main() {
    Gps uno;
    Gps dos;

    float longitud = 45.8695, latitud = -108.5478;

    cout << "Velocidad: " << uno.mostrarVelocidad() << endl;
    dos.ubicacion(longitud, latitud);

    cout << "Longitud: " << dos._longitud << endl;
    cout << "Latitud: " << dos._latitud;

    return 0;
}