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
        Counted():id(count++){cout << "This class id number is "<<id<<endl;}
        ~Counted(){cout << "Being destroyed and its id "<< id <<endl;}

};
int Counted::count = 0;

int main(int argc,char **argv){
    Counted c;
    Counted c2;
}