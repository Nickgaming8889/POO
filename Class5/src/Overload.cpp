#include <iomanip>
#include "Overload.h"

Overload::Overload() {
    x = 8;
}
Overload::~Overload() {

}

Overload::Overload(int n) {
    this->x = n;
}

//Operadores de Flujo...
std::ostream &operator<<(std::ostream &_output, const Overload &_data) {
    _output << _data.x;
    return _output;
}
std::istream &operator>>(std::istream &_enter, Overload &_data) {
    std::cout << "X:";
    _enter >> _data.x;
    return _enter;
}

//Operadores Binarios...
Overload Overload::operator-(Overload &_x) {
    Overload i;
    i.x = x - _x.x;
    return i;
}
Overload operator*(Overload &_x, Overload &_y) {
    Overload i;
    i.x = _x.x * _y.x;
    return i;
}

//Getters & Setters...
int Overload::getX() {
    return this->x;
}
void Overload::setX(int _x) {
    this->x = _x;
}