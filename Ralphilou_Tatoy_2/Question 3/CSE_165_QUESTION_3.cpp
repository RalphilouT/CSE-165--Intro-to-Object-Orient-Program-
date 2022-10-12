//{L} printBinary 
//{T} 3.14159 

#include "printBinary.h" 
#include <cstdlib> 
#include <iostream> 
using namespace std; 
int main(int argc, char* argv[]) { 
    //  for (int i = 0; i < argc; ++i)
    //  {
    //     cout << argv[i] << "\n";
    //  }
        
    // if(argc != 2) { 
    //     cout << "Must provide a number" << endl; 
    //     exit(1); 
    // } 
    // double d = atof(argv[1]); 
    double d = 3.14159;
    unsigned char* cp = reinterpret_cast<unsigned char*>(&d);
    
    for(int i = sizeof(double); i > 0 ; i--) { 
        
        printBinary(cp[i-1]); 
    }
    //printBinary(3.14159);
}