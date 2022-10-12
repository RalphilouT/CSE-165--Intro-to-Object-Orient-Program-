#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
int fibonnacciSEQ(bool argument = false){
    static int start = 0;
    //static int indicator =0;
    static int fib = 0,fib1= 1;
    static int outputFIB;
    // if(indicator != 0)
    // {
    //     fib = 0;
    //     fib1 = 1;
    //     outputFIB = 0;

    // }
    if(start == 0){
        start++;
        return 0;
    }
    else if(start == 1)
    {
        start = 3;
        return 1;
    }
    else if(argument == true)
    {
        start = 1;
        fib = 0;
        fib1 = 1;
        outputFIB = 0;
        return 0;
    }
    else{
        outputFIB = fib + fib1;
        fib = fib1;
        fib1 = outputFIB;
        return outputFIB;
    }
    
}
int main(int argc,char **argv){
    // for(int i = 0; i <10 ; i++)
    // {
    //     cout << fibonnacciSEQ(false) << endl;
    //     if(i == 5)
    //     {
    //         cout << fibonnacciSEQ(true) << endl;
    //     }
    // }
    int error = 0;
    int userLENGTH = 0;
    int interrupt;
    
    cout << "How long do you want the sequence to be? " << endl;
    cin >> userLENGTH;
    cout << "When do you want to reset it to the starting sequence? " << endl;
    cin >> interrupt;
    if(userLENGTH < interrupt)
    {
        cout << "Choose interrupt time to be less than the length of the sequence requested" << endl;
        
    }
    else if(interrupt < 0 || userLENGTH < 0)
    {
        cout << "Choose a positive integer to either option" << endl;
        
    }
    cout << "The sequence is...." << endl;
    for(int i = 0; i<userLENGTH;i++)
    {
        if(i == interrupt)
        {
            cout << fibonnacciSEQ(true)<<endl;
            continue;
        }
        cout << fibonnacciSEQ() << endl;
        
    }

    
}