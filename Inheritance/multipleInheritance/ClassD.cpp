#include "ClassD.h"

ClassD::ClassD() {
    num1 = "01234";
    num2 = "56789";
    totalnum = "";
}

void ClassD::sumNum() {
    this->totalnum = num1 + num2;
}
void ClassD::allCharacter() {

    ClassB w;
    w.sumSpecial();
    sumMayus();
    sumMinus();
    sumNum();

    cout << w.getTotal() << getTotal2() << getTotal3() << totalnum << endl;

}


string ClassD::getNum1(){
    return num1;
}
void ClassD::setNum1(string _num1){
    this->num1 = _num1;
}

string ClassD::getNum2() {
    return num2;
}
void ClassD::setNum2(string _num2) {
    this->num2 = _num2;
}

string ClassD::getTotal4() {
    return totalnum;
}
void ClassD::setTotal4(string _totalnum) {
    this->totalnum = _totalnum;
}

ClassD::~ClassD() {

}