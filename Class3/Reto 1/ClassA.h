#ifndef CLASSA_H
#define CLASSA_H

#include <iostream>

class ClassA {
    private:
        int *num1;
        int *num2;
        int result;

    public:
        ClassA();
        ClassA(int, int, int);

        int getNum1(void);
        void setNum1(int);

        int getNum2(void);
        void setNum2(int);

        int getResult(void);
        void setResult(int);
};

#endif