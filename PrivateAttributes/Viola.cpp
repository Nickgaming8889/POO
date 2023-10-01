#include "Viola.h"

Viola::Viola() {
    
}
Viola::Viola(Bow* _volumen, std::string _side) {

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