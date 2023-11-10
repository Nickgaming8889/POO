#include "../headers/ClassFD.h"
#include <iostream>
using namespace std;

int main() {
    Vehicle *b = new Vehicle();
    Car *r = new Car();
    Truck *w = new Truck();
    Motocycle *t = new Motocycle();

    r->addMark();   
    r->viewInfo();

    return 0;
}