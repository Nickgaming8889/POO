#include <iostream>
#include "Gps.h"

using namespace std;

int main() {
    Gps uno;
    Gps dos;

    cout << "Velocidad: " << uno.mostrarVelocidad() << endl;
    dos.ubicacion();

    return 0;
}