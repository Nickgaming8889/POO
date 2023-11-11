#ifndef CLASSFD_H
#define CLASSFD_H

#include <limits>
#include <iostream>
using namespace std;

class Vehicle {
    protected:
        //Attributes...
        string mark;
        int year;
        string model;

    public:
        //Methods...
        Vehicle();
        virtual void addMark();
        virtual void addModel();
        virtual void addYear();
        virtual void viewInfo();

        virtual ~Vehicle();

};

class Car: public Vehicle {
    protected:
        //Attributes...

    public:
        //Methods...
        void addMark();
        void addModel();
        void addYear();
        void viewInfo();       
};

class Truck: public Vehicle {
    protected:
        //Attributes...
    
    public:
        //Methods...
        void addMark();
        void addModel();
        void addYear();
        void viewInfo();

};

class Motocycle: public Vehicle {
    protected:
        //Attributes...

    public:
        //Methods...
        void addMark();
        void addModel();
        void addYear();
        void viewInfo();
        
};

#endif