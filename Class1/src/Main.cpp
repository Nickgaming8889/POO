#include <iostream>
#include "Reloj.h"

using namespace std;

int main () {
    Reloj uno;
    Reloj dos;
    Reloj *tres = new Reloj();

    cout << uno.darHora() << endl;
    dos.encerLuz(true);
    tres->iniciarCronometro();

    return 0;
}