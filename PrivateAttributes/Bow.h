#ifndef BOW_H
#define BOW_H

#include "Viola.h"
#include <iostream>

class Bow {
    private:
        //Atributos...
        std::string material;
        std::string tension;
        std::string marca;
        int numCerdas;
        Viola* side;

    public:
        //Metodos...
        Bow();


        std::string getMaterial(void);
        void setMaterial(std::string);

        std::string getTension(void);
        void setTension(std::string);

        std::string getMarca(void);
        void setMarca(std::string);

        int getCerdas(void);
        void setCerdas(int);

        //Destructor...
        ~Bow();
};

#endif