#ifndef CLASS_B
#define CLASS_B

#include <iostream>
#include "ClassAA.h"
using namespace std;

class ClassBB: public ClassAA {
    protected:
        //Attributes...
        string career;
        float grade;

    public:
        //Methods...
        ClassBB();
        ClassBB(string, float);
        void insertInfo();
        void viewInfo();

        ~ClassBB();

        //Getters & Setters...
        string getCareer();
        void setCareer(string);

        float getGrade();
        void setGrade(float);
};

#endif