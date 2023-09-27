#include <iostream>
using namespace std;

int main() {
    int uno = 15;
    int *dos = &uno;
    int *tres = new int(25);
    int vec[5] = {45, 87, 46, 7, 4};

    cout << &uno << endl;
    cout << dos << endl;
    cout << *dos << endl;
    cout << &dos << endl;

    *tres = uno+*dos;
    
    cout << *tres << endl;

    cout << *(vec + 1) << endl;

    return 0;
}