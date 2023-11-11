#include "../headers/ClassFD.h"

Vehicle::Vehicle() {
    this->mark = "Undefine";
    this->model = "Undefine";
    this->year = 0000;
}
Vehicle::~Vehicle() {
    cout << "Thanks for watching." << endl;
}

//Father Methods...
void Vehicle::addMark() {
    
}
void Vehicle::addModel() {
    
}
void Vehicle::addYear() {
    
}
void Vehicle::viewInfo() {
    cout << "\nVehicle Information: " << endl;
    cout << "Car Mark: " << mark << "." << endl;
    cout << "Car Model: " << model << "." << endl;
    cout << "Car Year: " << year << ".\n" << endl;
}

//Derivate1 Class Methods...
void Car::addMark() {
    cout << "Car Mark: ";
    cin >> mark;
    while (getchar() != '\n');
}
void Car::addModel() {
    cout << "Car Model: ";
    cin >> model;
    while (getchar() != '\n');
}
void Car::addYear() {
    bool valid = false;

    cout << "Model Year: ";
    do {
        cin >> year;
        if (cin.good()) {
            valid = true;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid format. (Please enter a numeric year)" << endl;
        }
    } while (!valid);
}
void Car::viewInfo() {
    cout << "\nVehicle Information: " << endl;
    cout << "Car Mark: " << mark << "." << endl;
    cout << "Car Model: " << model << "." << endl;
    cout << "Car Year: " << year << ".\n" << endl;
}

//Derivate2 Class Methods...
void Truck::addMark() {
    cout << "Truck Mark: ";
    cin >> mark;
    while (getchar() != '\n');
}
void Truck::addModel() {
    cout << "Truck Model: ";
    cin >> model;
    while (getchar() != '\n');
}
void Truck::addYear() {
    bool valid = false;

    cout << "Model Year: ";
    do {
        cin >> year;
        if (cin.good()) {
            valid = true;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid format. (Please enter a numeric year)" << endl;
        }
    } while (!valid);
}
void Truck::viewInfo() {
    cout << "\nVehicle Information: " << endl;
    cout << "Truck Mark: " << mark << "." << endl;
    cout << "Truck Model: " << model << "." << endl;
    cout << "Truck Year: " << year << ".\n" << endl;
}

//Derivate3 Class Methods...
void Motocycle::addMark() {
    cout << "Motocycle Mark: ";
    cin >> mark;
    while (getchar() != '\n');
}
void Motocycle::addModel() {
    cout << "Motocycle Model: ";
    cin >> model;
    while (getchar() != '\n');
}
void Motocycle::addYear() {
    bool valid = false;

    cout << "Model Year: ";
    do {
        cin >> year;
        if (cin.good()) {
            valid = true;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid format. (Please enter a numeric year)" << endl;
        }
    } while (!valid);
}
void Motocycle::viewInfo() {
    cout << "\nVehicle Information: " << endl;
    cout << "Motocycle Mark: " << mark << "." << endl;
    cout << "Motocycle Model: " << model << "." << endl;
    cout << "Motocycle Year: " << year << ".\n" << endl;
}