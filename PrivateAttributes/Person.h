#ifndef PERSON_H
#define PERSON_H

#include "Viola.h"
#include <iostream>

class Person {
    private:
        //Atributos...
        int age;
        float height;
        float salary;
        Viola* side;
        Viola* marca;

    public:
        //Metodos...
        Person();



        int getAge(void);
        void setAge(int);

        float getHeight(void);
        void setHeight(float);

        float getSalary(void);
        void setSalary(float);

        //Destructor...
        ~Person();
};

#endif 