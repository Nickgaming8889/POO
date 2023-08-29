#include "Gps.h"

Gps::Gps() {
    _longitud = 45.8554;
    _latitud = -108.5548;
    _velocidad = "80 km/h";
}
void Gps::ubicacion(float longitud, float latitud) {
    this->_longitud = longitud;
    this->_latitud = latitud;
}
string Gps::mostrarVelocidad(void) {
    return _velocidad;
}