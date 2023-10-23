#include "Viola.h"

Viola::Viola() {
    side = "indefinido";
    marca = "indefinido";
    tipo = "indefinido";
    numStrings = 0;
}
/*Guarda los valores dentro de las variables, mediente
un constructor sobrecargado*/
Viola::Viola(std::string _side, std::string _marca, std::string _tipo, int _numStrings) {
    this->side = _side;
    this->marca = _marca;
    this->tipo = _tipo;
    this->numStrings = _numStrings;
}
/*Basado en el tamaño del instrumento, sera el tipo de 
largo en el arco*/
Viola::Viola(std::string _afinacion) {
    this->afinacion = _afinacion;
}
/*Segun el tipo de viola, sera el numero de cuerdas*/
Viola::Viola(int _numStrings) {
    if (_numStrings == 4) {
        this->tipo = "estandar";
    }
    else if (_numStrings == 5) {
        this->tipo = "Sergei Savarov 5 Cuerdas";
    }
    else if (_numStrings == 14) {
        this->tipo = "D'amore";
    }
    else {
        this->tipo = "indefinido";
    }
}

Viola::~Viola() {

}

//Getters and Setters...
std::string Viola::getSide() {
    return side;
}
void Viola::setSide(std::string _side) {
    this->side = _side;
}
std::string Viola::getMarca() {
    return marca;
}
void Viola::setMarca(std::string _marca) {
    this->marca = _marca;
}
std::string Viola::getTipo() {
    return tipo;
}
void Viola::setTipo(std::string _tipo) {
    this->tipo = _tipo;
}
int Viola::getStrings() {
    return numStrings;
}
void Viola::setStrings(int _numStrings) {
    this->numStrings = _numStrings;
}
std::string Viola::getAfinacion(void) {
    return afinacion;
}
void Viola::setAfinacion(std::string _afinacion) {
    this->afinacion = _afinacion;
}