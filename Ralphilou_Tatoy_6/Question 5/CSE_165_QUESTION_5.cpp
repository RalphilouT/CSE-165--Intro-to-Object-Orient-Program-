#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
int size = 10;
class Counted{
    int id;
    static int count;
    public:
        //int Counted::count = 0;
        Counted():id(count++){
        //cout << count<<endl;
        }
        ~Counted(){
        //cout << "Being destroyed and its id"<<endl;
        }
        void f();
        void * operator new(size_t size)
        {
            cout << "Overloading new operator and size is " <<size<<endl;
            //void * opn = ::operator new(size);
            void * opn = malloc(size);
            return opn;
        }
        void* operator new[](size_t size)
        {
            cout << "Overloading new operator[] and size is " <<size<<endl;
            void * opn = ::operator new(size);
            return opn;
        }
        
        void operator delete(void* opd)
        {
            cout << "Overloading delete operator"<<endl;
            free(opd);
        }
        void operator delete[](void* opd)
        {
            cout << "Overloading delete operator[]"<<endl;
            free(opd);
        }
        void displayCOUNT(){
            cout << "The count number is " << count << endl;
        }
};

void Counted::f()
{
    cout << "void f()" <<endl;
}
int Counted::count = 0;
int main(int argc,char **argv){
    cout << "One object class initialize...."<<endl;
    Counted * ptr = new Counted;
    ptr->displayCOUNT();
    cout << endl;
    cout << "Ten object class initialize...." << endl;
    Counted * ptr1 = new Counted[size];
    ptr1->displayCOUNT();
    delete ptr;
    delete[] ptr1;
}