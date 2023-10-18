#include "Overload.h"

Overload::Overload() {
    x = 3;
    y = 7;
    z = 6;
}
Overload::~Overload() {

}
Overload Overload::operator-(Overload &_x) {
    Overload i;
    i.x = x - _x.x;
    return i;
}
Overload operator *(Overload &_x, Overload &_y) {
    Overload i;
    i.x = _x.x * _y.z;
    return i;
}

//Getters & Setters...
int Overload::getX() {
    return this->x;
}
void Overload::setX(int _x) {
    this->x = _x;
}
int Overload::getY() {
    return this->y;
}
void Overload::setY(int _y) {
    this->y = _y;
}
int Overload::getZ() {
    return this->z;
}
void Overload::setZ(int _z) {
    this->z = _z;
}