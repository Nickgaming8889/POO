#include "Person.h"

Person::Person() {
    
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

}
/*Adquiere la marca del instrumento segun el
salario de la persona*/
Person::Person(float _salary, Viola *_attribute2) {
    
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