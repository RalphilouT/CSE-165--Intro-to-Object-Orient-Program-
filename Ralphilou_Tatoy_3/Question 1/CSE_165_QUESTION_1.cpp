#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;

class second;
class first;
class first{
    friend second;
    friend int main(int argc, char** argv);
    int memberFunc1(second *,int here1);
    double getVolume(int here)
    {
        cout << "Second user.... First's volume is: ";
        cout << here << endl;
    }
};
class second{
    friend first;
    friend int main(int argc, char** argv);
    int memberFunc2(first *, int here2);
    double getVolume(int here)
    {
        cout << "First user... Second's volume is: ";
        cout << here << endl;
    }
};
int first::memberFunc1(second*point2,int here){
    point2->getVolume(here);
}
int second::memberFunc2(first*point1,int here){
    point1->getVolume(here);
}
int main(int argc,char **argv){
    int current1 = 3,current2 = 4;
    first point1;
    second point2;
    point1.memberFunc1(&point2,current2);
    point2.memberFunc2(&point1,current1);


}