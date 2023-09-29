#include "ClassB.h"

ClassB::ClassB() {

}
ClassB::ClassB(int _num1, int _num2, int r) {
    r = _num1 + _num2;

    num1 = new int(_num1);
    num2 = new int(_num2);
    
    this->result = r;
}

int ClassB::getNum1() {
    return *num1;
}
void ClassB::setNum1(int _num1) {
    *num1 = _num1;
}
int ClassB::getNum2() {
    return *num1;
}
void ClassB::setNum2(int _num2) {
    *num2 = _num2;
}
int ClassB::getResult() {
    return result;
}
void ClassB::setResult(int _result) {
    result = _result;
}