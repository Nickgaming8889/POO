#ifndef ARCO_H
#define ARCO_H

#include <iostream>
//#include "Person.h"
#include "Viola.h"

class Arco {
    private:
        int numCerdas;
        std::string tension;
        std::string material;
        std::string largo;
        std::string marca;

    public:
        Arco();
        Arco(std::string, std::string);
        Arco(int, std::string);
        Arco(std::string);
        Arco(Viola &one, std::string);

        ~Arco();

        int getNumCerdas(void);
        void setNumCerdas(int);

        std::string getTesion(void);
        void setTesion(std::string);

        std::string getMaterial(void);
        void setMaterial(std::string);

        std::string getLargo(void);
        void setLargo(std::string);

        std::string getMarca(void);
        void setMarca(std::string);
};

#endif