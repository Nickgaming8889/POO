#ifndef AUTO_H
#define AUTO_H

#include <iostream>
using namespace std;

class Auto {
    private:
        string marca;
        string modelo;
        int year;
        string color;
        string version;

    public:
        Auto(/* args */);
        Auto(string, string);
        Auto(string, int);
        Auto(string, string, string);

        ~Auto();

        string getMarca(void);
        void setMarca(string);

        string getModelo(void);
        void setModelo(string);

        int getYear(void);
        void setYear(int);

        string getColor(void);
        void setColor(string);

        string getVersion(void) {return version;};
        void setVersion(string version) {this->version = version;};
};

#endif