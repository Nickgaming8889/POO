#include "Person.h"
#include "Viola.h"
#include "Arco.h"

Person::Person() {
    genero = "Masculino";
    edad = 20;
}
/*Person::~Person() {

}*/
Person::Person(std::string _genero) {
    this->genero = _genero;
}
Person::Person(int _edad, float _estatura) {
    this->edad = _edad;
    this->estatura = _estatura;
}
Person::Person(int _edad, Viola& one) {
    this->edad = _edad;
    one.getSide();
    one.setSide("4/4 Side");
}
Person::Person(float _salario, Viola& two) {
    this->salario = _salario;
    two.getMarca();
}

int Person::getEdad(void) {
    return edad;
}
void Person::setEdad(int _edad) {
    edad = _edad;
}
float Person::getEstatura(void) {
    return estatura;
}
void Person::setEstatura(float _estatura) {
    estatura = _estatura;
}
float Person::getSalario(void) {
    return salario;
}
void Person::setSalario(float _salario) {
    salario = _salario;
}
std::string Person::getGenero(void) {
    return genero;
}
void Person::setGenero(std::string _genero) {
    genero = _genero;
}