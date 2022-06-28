#ifndef Stack_Imp_Array_H
#define Stack_Imp_Array_H

using namespace std;

const int arraySize = 10;
class StackImpArray{
    int data[arraySize];
    int head;
    public:
        StackImpArray() : data{0}, head{-1} {}
        void displayIMP();
        void pushIMP(int val1);
        int showIMP();
        int popIMP();
        bool emptyIMP();

};


#endif 
