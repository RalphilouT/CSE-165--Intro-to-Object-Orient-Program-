#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <fstream>
#include <string>
using namespace std;

int main(int argc,char **argv){
    ofstream fileopen;
    fileopen.open("question1.text",ios::out|ios::binary);
    fileopen << "Newline added \nDetecting newline";
    fileopen.close();
    // ofstream fileopen1;
    // fileopen1.open("question1version2.text");
    // fileopen1 << "Newline added \nDetecting newline";
    // fileopen1.close();
    ifstream file("question1.text");
    string word;
    string whole;
    if(file.is_open())
    {
           
        while(getline(file,word))
        {
            whole += word;
            //whole.push_back('\n');
        }
         
    }
    cout << "Version one - Writing to file then getting content of file" << endl;
    cout << whole;
    cout << endl;
    // << 0x0d << endl;
    for(int i = 0; i < sizeof(whole);i++)
    {
        //cout << int(whole[i]) << " ";
        if(int(whole[i])== 0x0d)
        {
            whole.erase(whole.begin()+i);
            //cout << "Hello" << endl;
        }
    }
    cout << whole;
    cout << endl;
    file.close();
    whole = "";
    word = "";
    cout << "Version two - Just getting content of file" << endl;
    ifstream file2("question1version2.text");
    if(file2.is_open())
    {
           
        while(getline(file2,word))
        {
            whole += word;
            //whole.push_back('\n');
        }
         
    }
    //cout << whole;
    // << 0x0d << endl;
    for(int i = 0; i < sizeof(whole);i++)
    {
        //cout << int(whole[i]) << " ";
        if(int(whole[i])== 0x0d)
        {
            whole.erase(whole.begin()+i);
            //cout << "Hello" << endl;
        }
    }
    cout << whole;
    file2.close();
    
}