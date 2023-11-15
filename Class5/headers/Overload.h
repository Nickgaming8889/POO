#ifndef OVERLOAD_H
#define OVERLOAD_H

#include <iostream>

class Overload {
    private:
        //Attributes...
        int x;

    public:
        Overload();
        Overload(int);
        Overload operator-(Overload&);
        friend Overload operator*(Overload&, Overload&);
        friend std::ostream &operator<<(std::ostream &, const Overload&);
        friend std::istream &operator>>(std::istream &, Overload&);

        ~Overload();

        int getX(void);
        void setX(int);

};

#endif