#ifndef CLASSFD_H
#define CLASSFD_H

#include <iostream>
using namespace std;

class Car {
    protected:
        //Attributes...
        string mark;
        int year;
        string model;

    public:
        //Methods...
        Car();
        virtual void addCarMark();
        virtual void addCarModel();
        virtual void addCarYear();
        virtual void viewInfo();

        virtual ~Car();

};

class Derivate1: public Car {
    protected:
        //Attributes...

    public:
        //Methods...
        void addCarMark();
        void addCarModel();
        void addCarYear();
        void viewInfo();       
};

class Derivate2: public Car {
    protected:
        //Attributes...
    
    public:
        //Methods...
        void addCarMark();
        void addCarModel();
        void addCarYear();
        void viewInfo();

};

class Derivate3: public Car {
    protected:
        //Attributes...

    public:
        //Methods...
        void addCarMark();
        void addCarModel();
        void addCarYear();
        void viewInfo();
        
};

#endif