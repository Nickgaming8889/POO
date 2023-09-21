#include "Viola.h"

Viola::Viola() {
    marca = "";
    afinacion = "";
    side = "";
    volumen = "";
}
Viola::~Viola() {

}
Viola::Viola(int _numCuerdas) {
    this->numCuerdas = _numCuerdas;
}
Viola::Viola(std:: string _marca, std::string _side) {
    this->marca = _marca;
    this->side = _side;
}
Viola::Viola(std::string _afinacion) {
    this->afinacion = _afinacion;
}
Viola::Viola(Arco _tension, std::string _volumen) {
    _tension.getTesion();
    this->volumen = _volumen;

    if (_tension.getTesion() == "Alta") {
        _volumen = "Del 80% o mas...";
        std::cout << _volumen << std::endl;
    }
    else if (_tension.getTesion() == "Media") {
        _volumen = "Del 50% o mas...";
        std::cout << _volumen << std::endl;
    }
    else if (_tension.getTesion() == "Baja") {
        _volumen = "Del 50% o menos...";
        std::cout << _volumen << std::endl;
    }
    else {
        _volumen = "Sonido nulo...";
        std::cout << _volumen << std::endl;
    }
}

std::string Viola::getSide(void) {
    return side;
}
void Viola::setSide(std::string _side) {
    side = _side;
}
std::string Viola::getMarca(void) {
    return marca;
}
void Viola::setMarca(std::string _marca) {
    marca = _marca;
}
std::string Viola::getAfinacion(void) {
    return afinacion;
}
void Viola::setAfinacion(std::string _afinacion) {
    afinacion = _afinacion;
}
int Viola::getNumCuerdas(void) {
    return numCuerdas;
}
void Viola::setNumCuerdas(int _numCuerdas) {
    numCuerdas = _numCuerdas;
}
std::string Viola::getVolumen(void) {
    return volumen;
}