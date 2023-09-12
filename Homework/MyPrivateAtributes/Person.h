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
        Person(int, Viola &one);
        Person(float, Viola &two);

        void tomarArco(bool);
        void tocarMusica(bool);
        
        ~Person();

        int getEdad(void);
        void setEdad(int);

        float getEstatura(void);
        void setEstatura(float);

        float getSalario(void);
        void setSalario(float);

        std::string getGenero(void);
        void setGenero(std::string);
};

#endif