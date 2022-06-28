#ifndef Stack_Of_Int_H
#define Stack_Of_Int_H
#include "StackImpVector.h"
//#include "StackImpArray.h"
class StackOfInt {
    StackImpVEC stack;
    //StackImpArray stack;
    public:
        void pushINT(int val1);
        void displayINT();
        int showINT();
        int popINT();
        bool isemptyINT();
};
#endif 