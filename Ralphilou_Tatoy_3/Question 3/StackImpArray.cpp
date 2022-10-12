#include <iostream>
#include "StackImpArray.h"
using namespace std;

void StackImpArray::displayIMP() {
   for (int i = head; i >= 0; i--){
       cout << data[i] << endl;
   }
}

void StackImpArray::pushIMP(int val1) {
    //cout << "Number of ints are "<<  head << endl;
    if (head > arraySize-2) {
       cout << "No more room" << endl;
       return;
    }
    head++;
    data[head] = val1;
}

int StackImpArray::showIMP() {
    int selected;
    if(head>=0)
    {
        selected = data[head];
    }
    else{
        selected = 0;
    }
    return selected;
}

int StackImpArray::popIMP() {
    if (head == -1)
    {
        return 0;
    }
    int selected = data[head];
    data[head] = 0;
    head--;
    return selected;
}

bool StackImpArray::emptyIMP() {
    return (head == -1);
}
