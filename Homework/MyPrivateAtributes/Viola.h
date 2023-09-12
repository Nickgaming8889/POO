#ifndef VIOLA_H
#define VIOLA_H

#include <iostream>
#include "Arco.h"
#include "Person.h"

class Viola {
    private:
        std::string tamaño;
        std::string marca;
        std::string afinacion;
        int numCuerdas;
        float volumen;

    public:
        Viola();
        Viola(int);
        Viola(std::string, std::string);
        Viola(float);
        Viola(std::string);

        ~Viola();
};

#endif