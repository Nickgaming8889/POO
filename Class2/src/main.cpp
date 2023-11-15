#include <iostream>
#include "Auto.h"

using namespace std;

int main() {
    
    Auto one("virtus", 2000);
    Auto two;
    Auto *three = new Auto("vw", "three");

    cout << one.getMarca() << endl;
    one.setMarca("Audi");
    cout << one.getMarca() << endl;
    cout << two.getModelo() << endl;
    two.setModelo("two");
    cout << three->getColor() << endl;
    three->~Auto();

    return 0;
}
