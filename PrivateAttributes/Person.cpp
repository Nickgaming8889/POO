#include "Person.h"

Person::Person() {

}
Person::Person() {

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
float Person::getHeight() {
    return height;
}
void Person::setHeight(float _height) {
    this->height = _height;
}
float Person::getSalary() {
    return salary;
}
void Person::setSalary(float _salary) {
    this->salary = _salary;
}