#include "Reloj.h"

Reloj::Reloj() {
    hora = 12;
    minuto = 45;
}
bool Reloj::iniciarCronometro(void) {
    cout << "Cronometro iniciado" << endl;
    return true;
}
int Reloj::darHora(void){
    return hora;
}
void Reloj::encerLuz(bool status) {
    if (status)
        cout << "Luz encendida" << endl;
        else
            cout << "Luz apagada" << endl;
}
void Reloj::fijarHora(int hora, int minuto) {
    this->hora = hora;
    this->minuto = minuto;
}