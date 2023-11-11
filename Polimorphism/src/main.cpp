#include "../headers/ClassFD.h"
#include <iostream>
using namespace std;

int main() {
    Vehicle* b = new Vehicle();
    Car* r = new Car();
    Motocycle* t = new Motocycle();

    //Father Class...
    b->viewInfo();
    //Son Class...
    r->addMark();
    r->addModel();
    r->addYear();
    r->viewInfo();
    //Another Son Class...
    t->addMark();
    t->addModel();
    t->addYear();
    t->viewInfo();

    return 0;
}