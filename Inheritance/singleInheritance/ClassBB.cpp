#include "ClassBB.h"

ClassBB::ClassBB() {
    career = "NULL";
    grade = 78.96;
}
ClassBB::ClassBB(string _career, float _grade) {
    this->career = _career;
    this->grade = _grade;
}

void ClassBB::insertInfo() {

    insertData();
    while (getchar() != '\n');
    cout << "Name of Career: " << endl;
    getline(cin, career);
    cout << "Tell me your Grade: " << endl;
    cin >> grade;

}
void ClassBB::viewInfo() {
    cout << "Name: " << getName() << endl;
    cout << "Student Age: " << getAge() << endl;
    cout << "Career Name: " << career << "  Grade: " << grade << endl; 
}

//Own Getters & Setters...
string ClassBB::getCareer() {
    return career;
}
void ClassBB::setCareer(string _career) {
    this->career = _career;
}
float ClassBB::getGrade() {
    return grade;
}
void ClassBB::setGrade(float _grade) {
    this->grade = _grade;
}

//Destructor...
ClassBB::~ClassBB() {

}