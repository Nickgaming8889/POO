#include "ClassA.h"

ClassA::ClassA() {
    special1 = "!@#$%^&*()_-+=|";
    special2 = "{}[]'/.,?><:;~`";
    totalSpecial = "";
}

void ClassA::sumSpecial() {
    this->totalSpecial = special1 + special2;
}

string ClassA::getSpecial1(){
    return special1;
}
void ClassA::setSpecial1(string _special1){
    this->special1 = _special1;
}

string ClassA::getSpecial2() {
    return special2;
}
void ClassA::setSpecial2(string _special2) {
    this->special2 = _special2;
}

string ClassA::getTotal() {
    return totalSpecial;
}
void ClassA::setTotal(string _totalSpecial) {
    this->totalSpecial = _totalSpecial;
}

ClassA::~ClassA() {

}