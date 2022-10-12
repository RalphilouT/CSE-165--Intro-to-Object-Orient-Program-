#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <sstream>
using namespace std;
class Bird
{
    friend ostream& operator<<(ostream& opcout, const Bird& identifier);
    string member;
    static int members;
    public:
        Bird()
        {
            members++;
            ostringstream strings;
            strings << "Bird " << members;
            member = strings.str();
            cout << member <<" and its object number is "<< members<< endl;
        }
        Bird& operator=(const Bird& equal) {
            cout << "Equal operator called and copying object "<<member;
            if (this == &equal)
            {
                return *this;
            }
            // member = equal.member;
            // cout << member <<" and its object number is "<< members<< endl;
        }
        Bird(const Bird& copy) {
            
            member = copy.member;
            members++;
            cout << "Copy constructor called and copying  "<< member <<" and its object number is "<< members << endl;
        }
    
    
};

int Bird::members = 0;
ostream& operator<<(ostream& opcout, const Bird& identifier) {
    opcout << identifier.members;
}
int main(int argc,char **argv){
    Bird one;
    Bird two;
    Bird three;
    Bird copyCONST = three;
    three = two;

}



