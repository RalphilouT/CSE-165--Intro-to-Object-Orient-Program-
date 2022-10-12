#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
typedef struct{
    string name;
    string type;
    int size;
}mySTRUCT;

int main(int argc,char **argv){
    mySTRUCT notPOINTER;
    notPOINTER.name = "Eddie";
    notPOINTER.type = "Human";
    notPOINTER.size = 6;
    cout << "Subject name is " << notPOINTER.name << endl;
    cout << "He is a " << notPOINTER.type << endl;
    cout << "His shoe size is " << notPOINTER.size << endl;
    mySTRUCT * pointer;
    pointer = &notPOINTER;
    pointer->name = "Charles";
    pointer->type = "Martian";
    pointer->size = 7;
    cout << "Subject name is " << pointer->name << endl;
    cout << "He is a " << pointer->type << endl;
    cout << "His shoe size is " << pointer->size << endl;
    // cout << "Subject name is " << notPOINTER.name << endl;
    // cout << "He is a " << notPOINTER.type << endl;
    // cout << "His shoe size is " << notPOINTER.size << endl;
}