#include "Auto.h"

Auto::Auto() {
    modelo = "Generico";
}

Auto::~Auto() {
    cout << "Adiosin " << this->modelo << endl;
}
Auto::Auto(string _marca, string _modelo) {
    this->marca = _marca;
    this->modelo = _modelo;
    color = "rojo";
}
Auto::Auto(string _modelo, int _year) {
    year = _year;
}
Auto::Auto(string _marca, string _modelo, string _version) {
    this->marca = _marca;
    this->modelo = _modelo;
    this->version = _version;
}
string Auto::getMarca(void) {
    return marca;
}
void Auto::setMarca(string _marca) {
    this->marca = _marca;
}
string Auto::getModelo(void) {
    return modelo;
}
void Auto::setModelo (string _modelo) {
    modelo = _modelo;
}
int Auto::getYear(void) {
    return year;
}
void Auto::setYear(int _year) {
    year = _year;
}
string Auto::getColor(void) {
    return color;
}
void Auto::setColor(string _color) {
    color = this->color;
}