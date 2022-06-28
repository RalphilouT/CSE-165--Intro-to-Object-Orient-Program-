#include "Handle.h"
#include <iostream>
using namespace std;
int main() { 
    Handle u; 
    cout << u.read() << endl;  
    u.change(1); 
    cout << u.read() << endl;
    u.change(2); 
    cout << u.read() << endl; 
} 