#include "../headers/ClassFD.h"

Car::Car() {
    this->mark = "Undefine";
    this->year = 0000;
    this->model = "Undefine";
}
Car::~Car() {

}

//Father Methods...
void Car::addCarMark() {
    
}
void Car::addCarModel() {
    
}
void Car::addCarYear() {
    
}
void Car::viewInfo() {
    cout << "Car Mark: " << mark << endl;
    cout << "Car Model: " << model << endl;
    cout << "Car Year: " << year << "." << endl;
}

//Derivate1 Class Methods...
void Derivate1::addCarMark() {
    mark = "Datsun by Nissan.";
}
void Derivate1::addCarModel() {
    model = "720 Pick Up.";
}
void Derivate1::addCarYear() {
    year = 1989;
}
void Derivate1::viewInfo() {
    cout << "Car Mark: " << mark << endl;
    cout << "Car Model: " << model << endl;
    cout << "Car Year: " << year << "." << endl;
}

//Derivate2 Class Methods...
void Derivate2::addCarMark() {
    mark = "Chevrolet.";
}
void Derivate2::addCarModel() {
    model = "El Camino.";
}
void Derivate2::addCarYear() {
    year = 1968;
}
void Derivate2::viewInfo() {
    cout << "Car Mark: " << mark << endl;
    cout << "Car Model: " << model << endl;
    cout << "Car Year: " << year << "." << endl;
}

//Derivate3 Class Methods...
void Derivate3::addCarMark() {
    cout << "Which car mark is? " << endl;
    cin >> mark;
    while (getchar() != '\n');
}
void Derivate3::addCarModel() {
    cout << "Which car model is? " << endl;
    cin >> model;
    while (getchar() != '\n');
}
void Derivate3::addCarYear() {
    cout << "Car year? " << endl;
    cin >> this->year;
}
void Derivate3::viewInfo() {
    cout << "Car Mark: " << mark << endl;
    cout << "Car Model: " << model << endl;
    cout << "Car Year: " << year << "." << endl;
}