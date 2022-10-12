#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
class X{
    int variableX;
    public:
        X(int ARGUMENT):variableX(ARGUMENT){};
        void f()
        {
            cout << "In class X" << endl;
        }
        void fbyA()
        {
            cout << "In class X" << endl;
        }
};
class Y:public X{
    int variableY;
    public:
        Y(int ARGUMENT):variableY(ARGUMENT),X(ARGUMENT){};
        void f()
        {
            cout << "In class Y" << endl;
        }
        
};

class Z:public X{
    int variableZ;
    public:
        Z(int ARGUMENT):variableZ(ARGUMENT),X(ARGUMENT){};
        void f()
        {
            cout << "In class Z" << endl;
        }
        
};
class A:public Y, public Z{
    int vairiableA;
    public:
        A(int ARGUMENT):vairiableA(ARGUMENT),Z(ARGUMENT),Y(ARGUMENT){};
        void callFZ()
        {
            Z::f();
        }
        void callFY()
        {
            Y::f();
        }
        void callFX()
        {
            Z::fbyA();
        }
};
int main(int argc,char **argv){
    A a(10);
    a.callFZ();
    a.callFY();
    a.callFX();
}