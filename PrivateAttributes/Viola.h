#ifndef VIOLA_H
#define VIOLA_H

#include "Bow.h"
#include <iostream>

class Viola {
    private:
        //Atributos...
        std::string side;
        std::string afinacion;
        int numStrings;
        Bow volume;

    public:
        //Metodos...
        Viola();
        Viola(Bow *);

        //Destructor...
        ~Viola();
};

#endif