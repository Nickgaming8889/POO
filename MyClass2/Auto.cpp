#include "Auto.h"

Auto::Auto() {

}
void Auto::acelerar(bool status) {
    if (status)
        cout << "Acelerando" << endl;
        else
            cout << "Desacelerando" << endl;
}
void Auto::frenar(bool status) {
    if (status)
        cout << "Frenando" << endl;
        else
            cout << "" << endl;
}
void Auto::girar(bool status) {
    if (status == true)
        cout << "Girando a la derecha" << endl;
        else if (status == false)
            cout << "Girando a la izquierda" << endl;
}