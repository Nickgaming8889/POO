#ifndef ARCO_H
#define ARCO_H

#include <iostream>
#include "Person.h"
#include "Viola.h"

class Arco {
    private:
        int numCerdas;
        float tension;
        std::string material;
        std::string largo;
        std::string marca;

    public:
        Arco();
        Arco(std::string, std::string);
        Arco(int, float);
        Arco(std::string);

        ~Arco();
};

#endif