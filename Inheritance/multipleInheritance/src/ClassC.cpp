#include "ClassC.h"

ClassC::ClassC() {
    minus1 = "abcdefghijklm";
    minus2 = "nopqrstuvwxyz";
    totalminus = "";
}

void ClassC::sumMinus() {
    this->totalminus = minus1 + minus2;
}

string ClassC::getMinus1(){
    return minus1;
}
void ClassC::setMinus1(string _minus1){
    this->minus1 = _minus1;
}

string ClassC::getMinus2() {
    return minus2;
}
void ClassC::setMinus2(string _minus2) {
    this->minus2 = _minus2;
}

string ClassC::getTotal3() {
    return totalminus;
}
void ClassC::setTotal3(string _totalminus) {
    this->totalminus = _totalminus;
}

ClassC::~ClassC() {
    
}