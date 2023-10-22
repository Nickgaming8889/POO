#include "Bow.h"

Bow::Bow() {

}
Bow::Bow(std::string _material, std::string _largo, std::string _marca, int _numCerdas, int _tension) {
    this->material = _material;
    this->largo = _largo;
    this->marca = _marca;
    this->numCerdas = _numCerdas;
    this->tension = _tension;
}

Bow::~Bow() {

}


//Getters & Setters...
std::string Bow::getMaterial() {
    return material;
}
void Bow::setMaterial(std::string _material) {
    this->material = _material;
}
std::string Bow::getLargo() {
    return largo;
}
void Bow::setLargo(std::string _largo) {
    this->largo = _largo;
}
std::string Bow::getMarca() {
    return marca;
}
void Bow::setMarca(std::string _marca) {
    this->marca = _marca;
}
int Bow::getCerdas() {
    return numCerdas;
}
void Bow::setCerdas(int _numCerdas) {
    this->numCerdas = _numCerdas;
}
int Bow::getTension() {
    return tension;
}
void Bow::setTension(int _tension) {
    this->tension = _tension;
}