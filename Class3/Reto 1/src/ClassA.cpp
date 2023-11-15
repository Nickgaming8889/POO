#include "ClassA.h"

ClassA::ClassA() {
    result = 0;
}
ClassA::ClassA(int _num1, int _num2, int _result) {
    num1 = new int(_num1);
    num2 = new int(_num2);

    _result = *num1 + *num2;

    result = _result;
}

int ClassA::getNum1() {
    return *num1;
}
void ClassA::setNum1(int _num1) {
    *num1 = _num1;
}
int ClassA::getNum2() {
    return *num2;
}
void ClassA::setNum2(int _num2) {
    *num2 = _num2;
}
int ClassA::getResult() {
    return result;
}
void ClassA::setResult(int _result) {
    result = _result;
}