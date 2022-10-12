#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;

void function1(void*voidptr, int byte, int value)
{
    int * pointer = static_cast<int*>(voidptr);
    for(int i = 0;i < byte; i++)
    {
        pointer[i] = value;
    }
}
int main(int argc,char **argv)
{
    
    int arr[5];
    void * voidPTR = static_cast<void*>(arr);
    for(int i = 0;i <5;i++)
    {
        cout << arr[i] << endl;
    }
    cout <<endl;
    function1(voidPTR,5,1000);
    for(int i = 0;i <5;i++)
    {
        cout << arr[i] << endl;
    }
    cout <<endl;
    function1(voidPTR,1,-15);
    for(int i = 0;i <5;i++)
    {
        cout << arr[i] << endl;
    }
    cout <<endl;
}