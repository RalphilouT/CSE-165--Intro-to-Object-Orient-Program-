#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
class arrayofINT
{
    static const int arraySIZE = 5;
    //static const int arraySIZE;
    int array[arraySIZE] = {1,2,3,4,5};
    const int variable1;
    static int variable2;
    public:
        //inline arrayofINT():variable1(5){};
        arrayofINT();
        //inline void print();
        static void function();
        void print();
};
inline arrayofINT::arrayofINT():variable1(5){};
//const int arrayofINT::arraySIZE = 5;
int arrayofINT::variable2 = 8;
void arrayofINT::function(){
    cout << "Static int member: ";
    cout << variable2 << endl;
    // cout << "const int member";
    // cout << variable1 << endl;
    //print();
}
inline void arrayofINT::print()
{
    for(int i = 0; i<arraySIZE;i++)
    {
        cout << *(array+i)<< endl;
    }
    cout << "Static member function calling..." << endl;
    function();
    cout << "Const int member: ";
    cout << variable1 << endl;
}
int main(int argc,char **argv){
    arrayofINT testing;
    testing.print();   
}
