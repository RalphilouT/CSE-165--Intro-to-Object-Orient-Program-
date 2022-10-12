#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <cstring>
using namespace std;
const int size = 10;
class arrCHAR
{
    char array[size];
    
    public:
        arrCHAR(char arg = ' '){
            memset(array,arg,size);
        }
        void print()
        {
            for(int i = 0; i <size;i++)
            {
                cout << array[i] << endl;
            }
        }
};
// inline void print()
// {
//     for(int i = 0; i <size;i++)
//     {
//         cout << array[i] << endl;
//     }
// }
int main(int argc,char **argv){
    arrCHAR test('a');
    test.print();
    // arrCHAR test1(' ');
    // test1.print();
}