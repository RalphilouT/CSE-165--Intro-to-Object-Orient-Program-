#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
int & rfunction(int * pointargument)
{
    int & reference = *pointargument;
    reference +=4;
    return reference;
}

int main(int argc,char **argv)
{
    int random = 1;
    int * print;
    //print = rfunction(&random);
    cout << rfunction(&random) <<endl;
}