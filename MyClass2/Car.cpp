#include "Car.h"

Car::Car() {
    _potencia = 255;
}
void Car::acelerar(bool status) {
    if (status)
        cout << "Acelerando" << endl;
        else
            cout << "Desacelerando" << endl;
}
void Car::frenar(bool status) {
    if (status)
        cout << "Frenando" << endl;
}
bool Car::girar(bool status) {
    if (status)
        cout << "Girando a la derecha" << endl;
        else
            cout << "Girando a la izquierda" << endl;
}