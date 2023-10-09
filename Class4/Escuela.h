#ifndef ESCUELA_H
#define ESCUELA_H

#include <iostream>

class Escuela {
    private:
        int *alumnos;
        int *profesores;
        std::string *nombre;

    public:
        Escuela();
        Escuela(int, int, std::string);
        Escuela(int*, int*, std::string*);

        int* getAlumnos(void);
        void setAlumnos(int*);

        int getProfesores(void);
        void setProfesores(int);

        std::string* getNombre(void);
        void setNombre(std::string);

        //Destructor...
        ~Escuela();
};

#endif