#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <cstdlib>
using namespace std;
int size = 10;
#define s1(X)
#define s2(X) s1(X)
#define LOCATION __FILE__ s2(__LINE__)
class randomCLASS{
    static vector <string> newSTRING;
    public:
    
        void * operator new(size_t size, string argument)
        {
            newSTRING.push_back(argument);
            void * opn = ::operator new(size);
            return opn;
        }
        void operator delete(void * ptr){
            free(ptr);
        }
        static void show()
        {
            for(int i = 0; i <newSTRING.size();i++)
            {
                cout << newSTRING[i]<<endl;
            }
        }
       
        
};
vector <string> randomCLASS::newSTRING;


int main(int argc,char **argv){
    randomCLASS * ptr = new(__FILE__) randomCLASS;
    randomCLASS * ptr1 = new(LOCATION __FILE__) randomCLASS;
    randomCLASS *ptr2 = new("Testing") randomCLASS;
    randomCLASS::show();
    delete ptr;
    delete ptr1;
    delete ptr2;
}