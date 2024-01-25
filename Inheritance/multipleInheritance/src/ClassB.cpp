#include "ClassB.h"

ClassB::ClassB() {
    mayus1 = "ABCDEFGHIJKLM";
    mayus2 = "NOPQRSTUVWXYZ";
    totalmayus = "";
}

void ClassB::sumMayus() {
    this->totalmayus = mayus1 + mayus2;
}

string ClassB::getMayus1(){
    return mayus1;
}
void ClassB::setMayus1(string _mayus1){
    this->mayus1 = _mayus1;
}

string ClassB::getMayus2() {
    return mayus2;
}
void ClassB::setMayus2(string _mayus2) {
    this->mayus2 = _mayus2;
}

string ClassB::getTotal2() {
    return totalmayus;
}
void ClassB::setTotal2(string _totalmayus) {
    this->totalmayus = _totalmayus;
}

ClassB::~ClassB() {
    
}