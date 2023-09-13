#include "Viola.h"

Viola::Viola() {
    marca = "";
}
/*Viola::~Viola() {

}*/
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
Viola::Viola(Arco& one, float _volumen) {
    one.getTesion();
    
}