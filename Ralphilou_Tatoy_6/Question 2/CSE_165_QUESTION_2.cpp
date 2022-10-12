#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;

class Counted{
    int id;
    static int count;
    public:
        //int Counted::count = 0;
        Counted():id(count++){cout << "The count number is "<<count<<endl;}
        ~Counted(){cout << "Being destroyed and its id is "<< id <<endl;}

};
int Counted::count = 0;
int main(int argc,char **argv){
    const int size = 10;
    vector<Counted*> c;
    Counted * arrayC = new Counted[size];
    for(int i = 0; i<size;i++)
    {
        c.push_back(arrayC+i);
    }
    for(int i = 0; i<size;i++)
    {
        c[i];
    }
    delete[] arrayC;
}