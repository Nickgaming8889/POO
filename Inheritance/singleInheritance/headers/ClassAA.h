#ifndef CLASS_A
#define CLASS_A

#include <iostream>
using namespace std;

class ClassAA {
    protected:
        //Attributes...
        string name;
        int age;

    public:
        //Methods...
        ClassAA();
        ClassAA(string, int);
        void insertData();

        ~ClassAA();

        //Getters & Setters...
        string getName();
        void setName(string);

        int getAge();
        void setAge(int);
};


#endif