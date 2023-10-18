#ifndef OVERLOAD_H
#define OVERLOAD_H

#include <iostream>

class Overload {
    private:
        //Attributes...
        int x;
        int y;
        float z;

    public:
        Overload();
        Overload operator-(Overload&);
        friend Overload operator*(Overload&, Overload&);

        ~Overload();

        int getX(void);
        void setX(int);

        int getY(void);
        void setY(int);

        int getZ(void);
        void setZ(int);

};

#endif