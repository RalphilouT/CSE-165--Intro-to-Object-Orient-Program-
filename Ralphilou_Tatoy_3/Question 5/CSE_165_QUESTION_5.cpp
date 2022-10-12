#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
class StringVector : public vector<void*>
{
    public:
        void push(string * sptr1)
        {
            //cout << *sptr1 << endl;
            vector<void*>::push_back(sptr1);
        }
        string * operator[](int x){
            string* sptr2 = (string*)(*(vector<void*>*)this)[x];
            return sptr2;
        }
};
int main(int argc,char **argv)
{
    StringVector test;
    string str1 = "Hello1";
    string str2 = "Hello2";
    void * vptr = static_cast<void*>(&str1);
    test.push(&str1);
    test.push(&str2);
    cout << *test[0] << endl;
    cout << *test[1] << endl;
    //test.push(&vptr); Says incompatible with the argument

}