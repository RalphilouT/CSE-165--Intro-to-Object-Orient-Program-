//Ralphilou Tatoy
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
//#define PI 3.14
#define PI 3.14159265359
int main(int argc,char **argv){
    double radius;
    double area;
    cout << "Enter radius: ";
    cin >> radius;
    area = PI * radius * radius;
    cout << "The area of your cirlce is "<< area;
    return 0;
}