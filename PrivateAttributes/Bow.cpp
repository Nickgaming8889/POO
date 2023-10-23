#include "Bow.h"

Bow::Bow() {
    material = "generico";
    largo = "indefinido";
    marca = "indefinido";
    numCerdas = 0;
    tension = 0;
}
Bow::Bow(std::string _material, std::string _largo, std::string _marca, int _numCerdas, int _tension) {
    this->material = _material;
    this->largo = _largo;
    this->marca = _marca;
    this->numCerdas = _numCerdas;
    this->tension = _tension;
}
/*Segun el material del que este hecho, sera la marca*/
Bow::Bow(std::string _material, std::string _marca) {
    if (_material == "madera") {
        _marca = "estandar";
        this->marca = _marca;
    }
    else if (_material == "Fibra de Vidrio") {
        _marca = "Gama Media";
        this->marca = _marca;
    }
    else if (_material == "Fibra de Carbono") {
        _marca = "Gama Alta";
        this->marca = _marca;
    }
    
}
/*Cuanta tension soporta segun el numero de cerdas*/
Bow::Bow(int _numCerdas) {
    if (90 <= _numCerdas <= 120) { 
        this->tension = 80;
    }
    else if (75 <= _numCerdas <= 89) {
        this->tension = 70;
    }
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