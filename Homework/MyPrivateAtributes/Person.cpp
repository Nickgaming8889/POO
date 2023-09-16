#include "Person.h"
#include "Viola.h"
#include "Arco.h"

Person::Person() {
    genero = "";
    dormir = "";
    edad = 0;
    salario = 0.0;
    estatura = 0.0;
}
Person::~Person() {

}
Person::Person(std::string _genero) {
    this->genero = _genero;
}
Person::Person(int _edad, float _estatura) {
    this->edad = _edad;
    this->estatura = _estatura;
}
/*Person::Person(std::string _dormir) {
    this->dormir = _dormir;
}*/
Person::Person(int _edad, Viola& one) {
    this->edad = _edad;
    
    if (_edad <= 10) {
        one.setSide("1/4");
    }
    else if (_edad <= 13) {
        one.setSide("2/4");
    }
    else if (_edad <= 15) {
        one.setSide("3/4");
    }
    else {
        one.setSide("4/4");
    }
}
Person::Person(float _salario, Viola& two) {
    this->salario = _salario;
    two.getMarca();

    if (_salario >= 5000.00) {
        two.setMarca("Yamaha");
    }
    if (_salario <= 4500 && _salario >= 1800.00) {
        two.setMarca("Gilga");
    }
    else {
        two.setMarca("Marca Generica");
    }
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
/*std::string Person::getDormir(void) {
    return dormir;
}
void Person::setDormir(std::string _dormir) {
    dormir = _dormir;
}*/