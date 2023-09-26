#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
    private:
        //Atributos...
        int age;
        float height;
        std::string gender;

    public:
        //Metodos...
        Person();

        //Destructor...
        ~Person();
};

#endif 