#include "Gps.h"

Gps::Gps() {
    _longitud = 45.8554;
    _latitud = -108.5548;
    _velocidad = "80 km/h";
}
void Gps::ubicacion(void) {
    cout << "Longitud: " << _longitud << endl;
    cout << "Latitud: " << _latitud << endl;
}
string Gps::mostrarVelocidad(void) {
    return _velocidad;
}