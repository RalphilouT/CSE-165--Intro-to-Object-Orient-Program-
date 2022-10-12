#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
//
int main(int argc,char **argv){
    int desiredFIB;
    cin >> desiredFIB;
    stack<int> fibonacci;
    int number1 = 1;
    int number2 = 1;
    int addTOGETHER = 0;
    fibonacci.push(addTOGETHER);
    fibonacci.push(number1);
    fibonacci.push(number2);
    if(desiredFIB <= 2){
        cout<< "The number is: " << fibonacci.top() << endl;

    }
    else{
        for(int i = 0; i<desiredFIB-2;i++)
        {
            number2 = fibonacci.top();
            fibonacci.pop();
            number1 = fibonacci.top();
            fibonacci.pop();
            addTOGETHER = fibonacci.top();
            fibonacci.pop();
            addTOGETHER = number1 + number2;
            fibonacci.push(number1);
            fibonacci.push(number2);
            fibonacci.push(addTOGETHER);
        }
        cout << "The number is " << fibonacci.top() << endl;
    }
}