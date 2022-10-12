//Ralphilou Tatoy
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;

int main(int argc,char **argv){
    int numbers = 100,primeCHECK;
    // cout << "How many numbers: ";
    // cin >> numbers;
    for(int i = 2;i<numbers;i++)
    {
        primeCHECK = 0;
        for(int j = 2;j < i ; j++)
        {
            if(i % j == 0)
            {
                primeCHECK = 1;
                break;
            }
        }
        if (primeCHECK != 1)
        {
            
            cout << i << ", ";
        }
    }
    cout << endl;
    return 0;
}
