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
        Arco(Viola &one, std::string);

        ~Arco();

        int getNumCerdas(void);
        void setNumCerdas(int);

        float getTesion(void);
        void setTesion(float);

        std::string getMaterial(void);
        void setMaterial(std::string);

        std::string getLargo(void);
        void setLargo(std::string);

        std::string getMarca(void);
        void setMarca(std::string);
};

#endif