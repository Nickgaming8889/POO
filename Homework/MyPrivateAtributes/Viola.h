#ifndef VIOLA_H
#define VIOLA_H

#include <iostream>
#include "Arco.h"
#include "Person.h"

class Viola {
    private:
        std::string side;
        std::string marca;
        std::string afinacion;
        int numCuerdas;
        float volumen;

    public:
        Viola();
        Viola(int);
        Viola(std::string, std::string);
        //Viola(float); Esta no va...
        Viola(std::string);
        Viola(Arco &one, float);

        ~Viola();

        std::string getSide(void);
        void setSide(std::string);

        std::string getMarca(void);
        void setMarca(std::string);

        std::string getAfinacion(void);
        void setAfinacion(std::string);

        int getNumCuerdas(void);
        void setNumCuerdas(int);

        float getVolumen(void);
        void setVolumen(float);
};

#endif