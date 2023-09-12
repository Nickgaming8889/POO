#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "Viola.h"
#include "Arco.h"

class Person {
    private:
        int edad;
        float estatura;
        float salario;
        std::string genero;

    public:
        Person();
        Person(std::string);
        Person(int, float);

        
        ~Person();
};

#endif