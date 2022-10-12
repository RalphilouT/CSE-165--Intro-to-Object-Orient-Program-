#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
const int globalsize = 5;
using namespace std; 

class array1{
    public:
        
        int array[globalsize] = {1,1,1,1,2};
};
int main(int argc, char* argv[]) { 
    
    array1 arr;
    array1 * arrptr = &arr;
    //int array1::*parray[5] = &array1::array;
    int(array1::*random)[globalsize] = &array1::array;
    //Pointer to class and accessing the member that way
    for(int i =0 ;i <globalsize;i++)
    {
        cout << (arrptr->array)[i]<<endl;
    }
    cout <<endl;
    cout << "Here is the actual answer to the question" << endl;
    
    //Pointer to member
    for(int i=0; i<globalsize;i++)
    {
        cout << *(arrptr->*random+i) <<endl;
    }
    cout << "Yes it can access the class member via pointer if it is public." << endl;
    //Yes
    
}
// class array1{
//     public:

//         int array[globalsize] = {1,1,1,1,1};
// };
// int main(int argc, char* argv[]) { 
    
//     array1 arr;
//     array1 * arrptr = &arr;
//     int(array1::*random)[globalsize] = &array1::array;
//     for(int i =0 ;i <globalsize;i++)
//     {
//         cout << (arrptr->array)[i]<<endl;
//     }
//     //Yes
//     //cout << arrptr->array<<endl;
//     return 0;
// }