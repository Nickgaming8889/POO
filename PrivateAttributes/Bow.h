#ifndef BOW_H
#define BOW_H

#include "Viola.h"
#include <iostream>

class Bow {
    private:
        //Atributos...
        std::string material;
        std::string largo;
        std::string marca;
        int numCerdas;
        int tension;
        

    public:
        //Metodos...
        Bow();
        Bow(int);
        Bow(const std::string&);
        Bow(std::string, std::string, std::string, int, int);


        std::string getMaterial(void);
        void setMaterial(std::string);

        std::string getLargo(void);
        void setLargo(std::string);

        std::string getMarca(void);
        void setMarca(std::string);

        int getCerdas(void);
        void setCerdas(int);

        int getTension(void);
        void setTension(int);

        //Destructor...
        ~Bow();
};

#endif