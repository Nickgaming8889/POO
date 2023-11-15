#include "ClassAA.h"

ClassAA::ClassAA() {
    name = "Jose Luis Panuco";
    age = 25;
}
ClassAA::ClassAA(string _name, int _age) {
    this->name = _name;
    this->age = _age;
}

void ClassAA::insertData() {
    cout << "Student Name: " << endl;
    getline(cin, name);
    cout << "Age? " << endl;
    cin >> age;
}

//Own Getters & Setters...
string ClassAA::getName() {
    return name;
}
void ClassAA::setName(string _name) {
    this->name = _name;
}
int ClassAA::getAge() {
    return age;
}
void ClassAA::setAge(int _age) {
    this->age = _age;
}

//Destructor...
ClassAA::~ClassAA() {

}