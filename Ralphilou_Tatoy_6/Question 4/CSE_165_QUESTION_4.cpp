#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include "PStash.h"
#include "require.h"
#include "PStash.cpp"
using namespace std;

class Counted{
    //friend std::ostream& operator<<(std::ostream& out, LinkedList& list)
    friend ostream& operator<<(std::ostream& out, Counted& list);
    int id;
    static int count;
    public:
        //int Counted::count = 0;
        Counted():id(count++){cout <<"The counted is " <<count<<endl;}
        ~Counted(){cout << "Being destroyed and its id"<<endl;}
        void f();
};
void Counted::f()
{
    cout << "void f() and its id is "<< id <<endl;
}
ostream& operator<<(std::ostream& out, Counted& list){
    cout << list.id;
    return out;
}
int Counted::count = 0;
int main(int argc,char **argv){
    const int size = 10;
    // vector<Counted*> c;
    PStash p;
    //Counted * arrayC = new Counted[size];
    for(int i = 0; i<size;i++)
    {
        //p.add(arrayC+i);
        p.add(new Counted);
    }
    for(int i = 0; i<size;i++)
    {
        cout << *(Counted*)p[i] << endl;
    }
    for(int i = 0; i<size;i++)
    {
        ((Counted*)p[i])->f();
    }
    for(int k = 0; k < size; k++) 
    {
        p.remove(k);
    }
    // delete[] arrayC;
    

}