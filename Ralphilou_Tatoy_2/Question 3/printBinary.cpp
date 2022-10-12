#include <iostream>
#include "printBinary.h"
using namespace std;

int position = 64;
void printBinary(const unsigned char val)
{
    //int position = 64;
    for(int i = 7; i >= 0; i--) 
    {
        if(val & (1 << i))
        {
            cout << "1"; 
        }
        else{
            cout << "0";
        }
        if(position == 64 || position == 53)
        {
            cout << " ";
        }
        position--;
    }
}