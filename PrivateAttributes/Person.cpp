#include "Person.h"

Person::Person() {
    name = "indefinido";
    age = 0;
    salary = 0.0;
}
Person::Person(std::string _name, int _age, float _salary, Viola *_attribute) {
    this->name = _name;
    this->age = _age;
    this->salary = _salary;
    this->attribute = _attribute;
}
/*Adquiere el el tamaño del instrumento, mediante
la edad de la persona*/
Person::Person(int _age, Viola *_attribute1) {
    if (_age > 18) {
        _attribute1->setSide("4/4");
    }
    else if (15 <= _age < 18) {
        _attribute1->setSide("3/4");
    }
    else if (13 <= _age < 15) {
        _attribute1->setSide("2/4");
    }
    else if (9 <= _age < 13) {
        _attribute1->setSide("1/4");
    }
    else {
        _attribute1->setSide("indefinido");
    }
}
/*Adquiere la marca del instrumento segun el
salario de la persona*/
Person::Person(std::string _name, float _salary, Viola *_attribute2) {
    this->name = _name;

    if (_salary > 5000.00) {
        _attribute2->setMarca("Yamaha");
    }
    else if (3500.00 <= _salary < 4900.00) {
        _attribute2->setMarca("Toshiba");
    }
    else {
        _attribute2->setMarca("Generica");
    }
}

Person::~Person() {

}

//Getters & Setters...
std::string Person::getName() {
    return name;
}
void Person::setName(std::string _name) {
    this->name = _name;
}
int Person::getAge() {
    return age;
}
void Person::setAge(int _age) {
    this->age = _age;
}
float Person::getSalary() {
    return salary;
}
void Person::setSalary(float _salary) {
    this->salary = _salary;
}