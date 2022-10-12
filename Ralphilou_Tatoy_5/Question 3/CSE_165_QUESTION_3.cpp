#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <ctime>
using namespace std;
class randomCLASS{
    public:
        virtual void function1()
        {
            int p[100];
        }
        void function2()
        {
           int p[100];
        }
};
class rINHERIT:public randomCLASS{

};
int main(int argc,char **argv){
    rINHERIT objectfc;
    randomCLASS * upcasting = (randomCLASS*)&objectfc;
    clock_t start, stop;
    double totalTime;
    cout << "Timing virtual function" <<endl;
    start = clock();
    for(int i=0; i<10000000;i++)
    {
        upcasting->function1();
    }
    stop = clock();
    totalTime = (stop - start) / (double)CLOCKS_PER_SEC;

	
    cout << totalTime <<endl;

    cout << "Timing non virtual function"<<endl;
    start = clock();
    for(int i=0; i<10000000;i++)
    {
        upcasting->function2();
    }
    stop = clock();
    totalTime = (stop - start) / (double)CLOCKS_PER_SEC;
    cout << totalTime <<endl;
    return 0;
}