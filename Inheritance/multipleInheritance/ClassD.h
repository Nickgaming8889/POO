#ifndef CLASS_D
#define CLASS_D

#include <iostream>
#include "ClassB.h"
#include "ClassC.h"
using namespace std;


class ClassD: ClassB, ClassC {
    protected:
        //Attributes...
        string num1;
        string num2;
        string totalnum;

    public:
        //Methods...
        ClassD();
        void sumNum();
        void allCharacter();

        ~ClassD();

        string getNum1();
        void setNum1(string);

        string getNum2();
        void setNum2(string);

        string getTotal4();
        void setTotal4(string);
};

#endif