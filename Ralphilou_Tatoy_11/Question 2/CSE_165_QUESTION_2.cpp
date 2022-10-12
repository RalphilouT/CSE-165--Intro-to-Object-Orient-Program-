#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <time.h>
using namespace std;
#define M_PI 3.14159265358979323846 
//double pi = M_PI;
const double PI = std::acos(-1);
int number = 3;
int main(int argc,char **argv){
    srand(time(NULL));
    int randomNUM;
    double collectionofNUM[] = {90.0,18.9,19.0};
    vector <double> angle;
    // for(int i = 0; i <number;i++)
    // {
    //     randomNUM = rand() % 90 +1;
    //     angle.push_back(randomNUM);
    // }
    for(int i = 0; i <number;i++)
    {
        angle.push_back(collectionofNUM[i]);
    }
    std::for_each(angle.begin(),angle.end(), [](double collectionofNUM){
        cout << "The sine of " << collectionofNUM << " = " << sin(collectionofNUM* PI/180) << endl; 
    });
}