#include "Arco.h"
#include "Viola.h"
#include "Person.h"

Arco::Arco() {
    numCerdas = 0;
    marca = "";
    tension = "";
    material = "";
    largo = "";
}
Arco::~Arco() {

}
Arco::Arco(std::string _marca, std::string _material) {
    this->marca = _marca;
    this->material = _material;
}
Arco::Arco(int _numCerdas, std::string _tension) {
    this->numCerdas = _numCerdas;
    this->tension = _tension;
}
Arco::Arco(std::string _tension) {
    this->tension = _tension;
}
Arco::Arco(Viola& one, std::string _largo) {
    one.getSide();

    if (one.getSide() == "4/4") {
        _largo = "Grande";
        this->largo = _largo;
    }
    else if (one.getSide() == "3/4" || one.getSide() == "2/4") {
        _largo = "Mediano";
        this->largo = _largo;
    }
    else {
        _largo = "Chico";
        this->largo = _largo;
    }
}

int Arco::getNumCerdas() {
    return numCerdas;
}
void Arco::setNumCerdas(int _numCerdas) {
    numCerdas = _numCerdas;
}
std::string Arco::getTesion() {
    return tension;
}
void Arco::setTesion(std::string _tension) {
    tension = _tension;
}
std::string Arco::getMaterial() {
    return material;
}
void Arco::setMaterial(std::string _material) {
    material = _material;
}
std::string Arco::getLargo() {
    return largo;
}
void Arco::setLargo(std::string _largo) {
    largo = _largo;
}
std::string Arco::getMarca(){
    return marca;
}
void Arco::setMarca(std::string _marca) {
    marca = _marca;
}