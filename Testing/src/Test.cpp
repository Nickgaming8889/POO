#include "Test.h"

Test::Test() {

}
Test::Test(double _x, double _y, double _result) {
    this->x = _x;
    this->y = _y;
    this->result = _result;
}

//Sobrecarga de Operadores...
Test Test::operator+(Test &_x) {
    Test _i;
    _i.result = _x.x + _x.y;
    return _i;
}

Test operator-(Test &_x, Test &_y) {
    Test _aux;
    _aux.result = _x.x - _y.y;
    return _aux;
}

//Getters & Setters...
double Test::getX() {
    return x;
}
void Test::setX(double _x) {
    this->x = _x;
}
double Test::getY() {
    return y;
}
void Test::setY(double _y) {
    this->y = _y;
}
double Test::getR() {
    return result;
}
void Test::setR(double _result) {
    this->result = _result;
}