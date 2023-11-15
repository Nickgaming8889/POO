#include "ClassBB.h"
#include <iostream>
using namespace std;

int main() {
    ClassBB b;
    
    b.viewInfo();
    cout << "" << endl;

    b.insertInfo();
    cout << "" << endl;
    cout << "Student Information: " << endl;
    b.viewInfo();

    return 0;
}