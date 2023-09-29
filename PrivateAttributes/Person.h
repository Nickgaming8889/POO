#ifndef PERSON_H
#define PERSON_H

#include "Viola.h"
#include <iostream>

class Person {
    private:
        //Atributos...
        int age;
        float height;
        std::string gender;
        Viola* side;
        Viola* volume;

    public:
        //Metodos...
        Person();


        int getAge(void);
        void setAge(int);

        //Destructor...
        ~Person();
};

#endif 