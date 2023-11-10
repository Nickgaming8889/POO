#include "../headers/ClassFD.h"
#include <iostream>
using namespace std;

int main() {
    Car b;
    Derivate1 r;
    Derivate3 w;

    //Father Class...
    b.addCarModel(),  b.addCarMark(), b.addCarYear();
    b.viewInfo();
    cout << "" << endl;
    //Son Class...
    r.addCarMark(), r.addCarModel(), r.addCarYear();
    r.viewInfo();
    cout << "" << endl;
    //Another Son Class...
    w.addCarMark(), w.addCarModel(), w.addCarYear();
    w.viewInfo();

    return 0;
}