#include "Escuela.h"

Escuela::Escuela() {
    alumnos = nullptr;
    profesores = nullptr;
    nombre = nullptr;
}
Escuela::Escuela(int _alumnos, int _profesores, std::string _nombre) {
    this->alumnos = new int(_alumnos);
    this->profesores = new int(_profesores);
    this->nombre = new std::string(_nombre);
}
Escuela::Escuela(int *_alumnos, int *_profesores, std::string *_nombre) {
    this->alumnos = _alumnos;
    this->profesores = _profesores;
    this->nombre = _nombre;
}

//Getters & Setters...
int* Escuela::getAlumnos() {
    return alumnos;
}
void Escuela::setAlumnos(int *_alumnos) {
    if (this->alumnos == nullptr)
        this->alumnos = _alumnos;
    else
        *this->alumnos = *_alumnos;
}
int Escuela::getProfesores() {
    return *profesores;
}
void Escuela::setProfesores(int _profesores) {
    if (this->profesores == nullptr)
        this->profesores = new int(_profesores);
    else
        *this->profesores = _profesores;
}
std::string* Escuela::getNombre() {
    return nombre;
}
void Escuela::setNombre(std::string _nombre) {
    *this->nombre = _nombre;
}