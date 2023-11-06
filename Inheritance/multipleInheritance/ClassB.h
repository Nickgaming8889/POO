#ifndef CLASS_B
#define CLASS_B


#include <iostream>
#include "ClassA.h"
using namespace std;

class ClassB: public ClassA {
    protected:
        //Attributes...
        string mayus1;
        string mayus2;
        string totalmayus;

    public:
        //Methods...
        ClassB();
        void sumMayus();

        ~ClassB();

        string getMayus1();
        void setMayus1(string);

        string getMayus2();
        void setMayus2(string);

        string getTotal2();
        void setTotal2(string);
};

#endif