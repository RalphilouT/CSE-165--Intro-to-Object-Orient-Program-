#include <iostream>
#include "StackImpVector.h"
using namespace std;

void StackImpVEC::displayIMP() {
   for (int i = head; i >= 0; i--){
       cout << data.at(i+1) << endl;
   }
}

void StackImpVEC::pushIMP(int val2) {
    head++;
    data.push_back(val2);
    newest = val2;
}

int StackImpVEC::showIMP() {
    int selected;
    if(head>=0)
    {
        selected = data.back();
    }
    else{
        selected = 0;
    }

    return selected;
}

int StackImpVEC::popIMP() {
    if (head == -1)
    {
        return 0;
    }
    int selected = data.back();
    data.pop_back();
    head--;
    return selected;
}

bool StackImpVEC::emptyIMP() {
    return (head == -1);
}

