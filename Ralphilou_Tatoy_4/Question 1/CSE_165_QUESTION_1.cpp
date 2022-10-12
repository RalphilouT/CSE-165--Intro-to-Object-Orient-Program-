#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
class Subject{
    public:
        virtual int f(){
            cout << "Int f sub"<<endl;
        }
        virtual int g(){
            cout << "Int g sub"<<endl;
        }
        virtual int h(){
            cout << "Int h sub"<<endl;
        }
};
class Proxy:public Subject{
    Subject*subjectPOINT;
    public:
        // Subject objderived;
        // Subject * subjectPOINT = &objderived;
        // Subject *sptr;
        // Proxy * ptr = &sptr;
        Proxy(Subject *sptr):subjectPOINT(sptr){};
        int f()
        {
            subjectPOINT->f();
        }
        int g()
        {
            subjectPOINT->g();
        }
        int h()
        {
            subjectPOINT->h();
        }
        void implimentations(Subject * sptr)
        {
            subjectPOINT = sptr;
        }
    
};
class implmentation1:public Subject{
    public:
        int f()
        {
            cout << "f in implementation1" <<endl;
        }
        int g()
        {
            cout << "g in implementation1" <<endl;
        }
        int h()
        {
            cout << "h in implementation1" <<endl;
        }
};
class implmentation2:public Subject{
    public:
        int f()
        {
            cout << "f in implementation2" <<endl;
        }
        int g()
        {
            cout << "g in implementation2" <<endl;
        }
        int h()
        {
            cout << "h in implementation2" <<endl;
        }
};

int main(int argc,char **argv){
    implmentation1 imp1;
    implmentation2 imp2;
    Proxy pptr(&imp1);
    
    pptr.f();
    pptr.g();
    pptr.h();
    pptr.implimentations(&imp2);
    pptr.f();
    pptr.g();
    pptr.h();
}