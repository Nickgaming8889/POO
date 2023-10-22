#include "Person.h"

Person::Person() {
    
}
Person::Person(std::string _name, int _age, float _salary, Viola *_attribute) {
    this->name = _name;
    this->age = _age;
    this->salary = _salary;
    this->attribute = _attribute;
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