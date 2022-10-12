#ifndef Stack_Imp_Vector_H
#define Stack_Imp_Vector_H
#include <vector>
using namespace std;
class StackImpVEC{
    vector<int> data;
    int head;
    int newest;
    public:
        StackImpVEC() : data{0}, head{-1} {}
        void displayIMP();
        void pushIMP(int val2);
        int showIMP();
        int popIMP();
        bool emptyIMP();
};


#endif 
