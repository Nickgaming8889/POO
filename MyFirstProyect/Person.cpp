#include "Person.h"
//#include "Auto.h"
//#include "Gps.h"

Person::Person() {

}
void Person::avanzar(bool status) {
    if (status)
        cout << "Avanzando" << endl;
        else
            cout << "Estatico" << endl;
}
void Person::verUbicacion(bool status) {
    if (status)
        cout << "Viendo ubicacion" << endl;
        else
            cout << "No viendo ubicacion" << endl;
}
void Person::comer(bool status) {
    if (status)
        cout << "Comiendo unos taquitos de barbacoa" << endl;
        else
            cout << "Soy pobre y de familia numerosa" << endl;
}