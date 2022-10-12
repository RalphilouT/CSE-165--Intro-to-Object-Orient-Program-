#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <fstream>
using namespace std;

class A{
    int i;
    public:
        A(){};
        A(int ii):i(ii){};
        ~A(){cout << "~A"<<endl;};
        void f() const {cout<<"In Class A"<<endl;};
};
class B{
    int i;
    public:
        B(){};
        B(int ii):i(ii){};
        ~B(){cout << "~B"<<endl;};
        void f1() const{cout<<"B::f1 In Class B"<<endl;};
        virtual void f2() const{cout<<"B::f2 In Class B"<<endl;};
};
class C:public B{
    A a;
    public:
        C(){};
        C(int ii): B(ii),a(ii){};
        ~C(){cout << "~C"<<endl;};
        void f1() const{
            //cout<<"In Class C"<<endl;
            cout<<"C::f1 In Class C"<<endl;
            //a.f();
            //B::f1();
        }
        void f2() const{
            //cout<<"In Class C"<<endl;
            cout<<"C::f2 In Class C"<<endl;
            //a.f();
            //B::f2();
        }

};

int main(int argc,char **argv)
{
    C c(47);
    B * b = (B*) &c;
    b->f1();
    cout << "This is virtual casting"<<endl;
    b->f2();
    // B * b1 = new C(47);
    // b1->f();
    // C cobject;
    // C * cpt = &c;
    // B * b = (B*) cpt;
    // b->f();
}
/*
/: C14:Combined.cpp 
// Inheritance & composition 
class A { 
 int i; 
public: 
 A(int ii) : i(ii) {} 
 ~A() {} 
 void f() const {} 
}; 
class B { 
 int i; 
public: 
 B(int ii) : i(ii) {} 
622 Thinking in C++ www.BruceEckel.com 
 ~B() {} 
 void f() const {} 
}; 
class C : public B { 
 A a; 
public: 
 C(int ii) : B(ii), a(ii) {} 
 ~C() {} // Calls ~A() and ~B() 
 void f() const { // Redefinition 
 a.f(); 
 B::f(); 
 } 
}; 
int main() { 
 C c(47); 
} ///:~ 

*/