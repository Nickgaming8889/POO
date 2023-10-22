#ifndef PERSON_H
#define PERSON_H

#include "Viola.h"
#include <iostream>

class Person {
    private:
        //Atributos...
        std::string name;
        int age;
        float height;
        float salary;
        Viola* side;

    public:
        //Metodos...
        Person();

        std::string getName(void);
        void setName(std::string);

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