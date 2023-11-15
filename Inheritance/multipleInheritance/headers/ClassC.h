#ifndef CLASS_C
#define CLASS_C


#include <iostream>
#include "ClassA.h"
using namespace std;

class ClassC: virtual public ClassA {
    protected:
        //Attributes...
        string minus1;
        string minus2;
        string totalminus;

    public:
        //Methods...
        ClassC();
        void sumMinus(); 

        ~ClassC();

        string getMinus1();
        void setMinus1(string);

        string getMinus2();
        void setMinus2(string);

        string getTotal3();
        void setTotal3(string);
};

#endif