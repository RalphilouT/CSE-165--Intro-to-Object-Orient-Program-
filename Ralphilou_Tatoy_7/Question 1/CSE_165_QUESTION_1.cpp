#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
int function(int * array = 0)
{
    static int * variable;
    //cout << array << endl;
    // if(array == 0)
    // {
    //     cout << "not zero" << endl;
    //     return 0;
    // }
    if(array!=0)
    {
        variable = array;
        return *variable;
    }
    else if(*(variable) == -1){
        return false;
    }
    else{
        cout <<  *(variable++) << endl;
        return true;
    }
}
int main(int argc,char **argv){
    int array[] ={1, 2, 3, 4,-1};
    int output = true;
    function(array);
    //output = function();
    while(output != false)
    {
        output = function();
    }
    // output = true;
    // function(array); 
    // while(output != false)
    // {
    //     output = function();
    // }
}