#ifndef EXAM_H
#define EXAM_H

#include <iostream>

class Test {
    private:
        double x, y;
        double result;

    public:
        Test(/* args */);
        Test(double, double, double);
        Test operator+(Test &);
        friend Test operator-(Test &, Test &);
        //~Test();

        double getX(void);
        void setX(double);

        double getY(void);
        void setY(double);

        double getR(void);
        void setR(double);
};

#endif