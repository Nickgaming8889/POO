#ifndef CLASSB_H
#define CLASSB_H

#include <iostream>

class ClassB {
    private:
        int *num1;
        int *num2;
        int result;

    public:
        ClassB();
        ClassB(int, int, int);

        int getNum1(void);
        void setNum1(int);

        int getNum2(void);
        void setNum2(int);

        int getResult(void);
        void setResult(int);
};

#endif