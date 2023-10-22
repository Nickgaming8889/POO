#include "Viola.h"

Viola::Viola() {
    
}
/*Guarda los valores dentro de las variables, mediente
un constructor sobrecargado*/
Viola::Viola(std::string _side, std::string _marca, std::string _afinacion, int _numStrings) {
    this->side = _side;
    this->marca = _marca;
    this->afinacion = _afinacion;
    this->numStrings = _numStrings;
}
/*Basado en el tamaño del instrumento, sera el tipo de 
largo en el arco*/
Viola::Viola(Bow* _largo, std::string _side) {
    
}


//Getters and Setters...
std::string Viola::getSide() {
    return side;
}
void Viola::setSide(std::string _side) {
    side = _side;
}
std::string Viola::getMarca() {
    return marca;
}
void Viola::setMarca(std::string _marca) {
    marca = _marca;
}
std::string Viola::getAfinacion() {
    return afinacion;
}
void Viola::setAfinacion(std::string _afinacion) {
    afinacion = _afinacion;
}
int Viola::getStrings() {
    return numStrings;
}
void Viola::setStrings(int _numStrings) {
    numStrings = _numStrings;
}