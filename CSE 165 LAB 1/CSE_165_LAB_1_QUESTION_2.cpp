//Ralphilou Tatoy
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main(int argc,char **argv){
    vector<string> v;
    ifstream in("CSE_165_LAB_1_QUESTION_2.cpp");
    string line,end;
    
    // if(in.is_open())
    // {
    //     cout << "open";
    // }
    while(getline(in,line))
    {
        v.push_back(line);
        
    }
    //cout << v.size() << endl;
    for(int i = 0; i<v.size();i++)
    {
        end.append(v[i]+"\n");
    }
    cout << end << endl;
    // for(int i = 0; i<v.size();i++)
    // {
    //     cout << v[i] << endl;
    // }
    in.close();
    return 0;
}