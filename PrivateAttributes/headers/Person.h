#ifndef PERSON_H
#define PERSON_H

#include "Viola.h"
#include <iostream>

class Person {
    private:
        //Atributos...
        std::string name;
        int age;
        float salary;
        Viola* attribute; /*Se encuentra unicamente este 
        atributo, pero se usan dos atributos de Viola*/ 

    public:
        //Metodos...
        Person();
        Person(std::string, int, float, Viola*);
        Person(int, Viola*);
        Person(std::string, float, Viola*);

        std::string getName(void);
        void setName(std::string);

        int getAge(void);
        void setAge(int);

        float getSalary(void);
        void setSalary(float);

        //Destructor...
        ~Person();
};

#endif 