#ifndef VIOLA_H
#define VIOLA_H

#include "Bow.h"
#include <iostream>

class Viola {
    private:
        //Atributos...
        std::string side;
        std::string marca;
        std::string afinacion;
        int numStrings;
        //Person* volume;

    public:
        //Metodos...
        Viola();
        Viola(Bow*, std::string);


        std::string getSide(void);
        void setSide(std::string);

        std::string getMarca(void);
        void setMarca(std::string);

        std::string getAfinacion(void);
        void setAfinacion(std::string);

        int getStrings(void);
        void setStrings(int);

        //Destructor...
        ~Viola();
};

#endif