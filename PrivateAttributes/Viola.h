#ifndef VIOLA_H
#define VIOLA_H

#include "Bow.h"
#include <iostream>

class Viola {
    private:
        //Atributos...
        std::string side;
        std::string marca;
        std::string tipo;
        int numStrings;
        std::string afinacion;
        

    public:
        //Metodos...
        Viola();
        Viola(std::string, std::string, std::string, int);
        Viola(int);
        Viola(std::string);


        std::string getSide(void);
        void setSide(std::string);

        std::string getMarca(void);
        void setMarca(std::string);

        std::string getTipo(void);
        void setTipo(std::string);

        int getStrings(void);
        void setStrings(int);

        //Destructor...
        ~Viola();
};

#endif