#include <iostream>
using namespace std;

class Reloj {
    
    public:
    //Atributos
    int hora, minuto;
    string marca;
    string tipo;
    string color;

    //Metodos
    Reloj();
    bool iniciarCronometro (void);
    int darHora (void);
    void encerLuz (bool);
    void fijarHora(int, int);

};

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

int main () {
    Reloj uno;
    Reloj dos;
    Reloj *tres = new Reloj();

    cout << uno.darHora() << endl;
    dos.encerLuz(true);
    tres->iniciarCronometro();

    return 0;
}