#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
char * function1(char * argument)
{
    int i = 0;
    while(argument[i] != '\0')
    {
        i++;
    }
    char * pointerArray = new char[i];
    for(int j = 0; j < i;j++)
    {
        pointerArray[j] = argument[j];
    }
    pointerArray[i] = '\0';
    return pointerArray;
}
int main(int argc,char **argv){
    char *p  = "string literal";
    int i = 0;
    while(p[i] != '\0')
    {
        i++;
    }
    char * result1 =  function1(p);
    char * result2 =  function1(result1);
    cout << result1 << " " <<  &result1 << endl;
    cout << result2 <<  " " << &result2 << endl;
    delete result1;
    delete result2;
}