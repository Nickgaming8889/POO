#ifndef CLASS_A
#define CLASS_A

#include <iostream>
using namespace std;

class ClassA {
    protected:
        //Attributes...
        string special1;
        string special2;
        string totalSpecial;

    public:
        //Methods...
        ClassA();
        void sumSpecial();

        ~ClassA();

        string getSpecial1();
        void setSpecial1(string);

        string getSpecial2();
        void setSpecial2(string);

        string getTotal();
        void setTotal(string);
};


#endif