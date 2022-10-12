#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
class Pet { 
    string pname; 
    public: 
        Pet(const string& petName) : pname(petName) {} 
        virtual string name() const= 0;
        virtual string speak() const= 0;
}; 
string Pet::name()const{
    cout <<"Peat::name() in def or pure virtual function" <<endl;
    return pname;
}
class Dog : public Pet { 
    string pname; 
    public: 
        Dog(const string& petName) : Pet(petName) {} 
        // New virtual function in the Dog class: 
        virtual string sit() const{ 
            cout << "sit() in class dog" << endl;
            return Pet::name() + " sits"; 
        } 
        string speak() const{ // Override 
        cout << "speak() in class dog" << endl;
            return Pet::name() + " says 'Bark!'"; 
        } 
        string name() const{ // Override 
            cout << "name() in class dog" << endl;
            return Pet::name() + " says 'Bark!'"; 
        } 
};
int main(int argc,char **argv){
    //Pet* p[] = {new Pet("generic"),new Dog("bob")}; 
    // Pet p("Snark");
    // Pet * p = new Dog("Snark")
    // cout << "p[0]->speak() = " << p[0]->speak() << endl; 
    // cout << "p[1]->speak() = " << p[1]->speak() << endl; 
    //Pet *p = new Dog("sn");
    Dog p("Snark");
    cout << p.name();
    //! cout << "p[1]->sit() = " << p[1]->sit() << endl; // Illegal

}
/*
class Pet { 
 string pname; 
public: 
 Pet(const string& petName) : pname(petName) {} 
 virtual string name() const { return pname; } 
 virtual string speak() const { return ""; } 
}; 
class Dog : public Pet { 
 string name; 
public: 
 Dog(const string& petName) : Pet(petName) {} 
 // New virtual function in the Dog class: 
 virtual string sit() const { 
 return Pet::name() + " sits"; 
 } 
 string speak() const { // Override 
 return Pet::name() + " says 'Bark!'"; 
 } 
}; 
int main() { 
 Pet* p[] = {new Pet("generic"),new Dog("bob")}; 
 cout << "p[0]->speak() = " 
 << p[0]->speak() << endl; 
 cout << "p[1]->speak() = " 
 << p[1]->speak() << endl; 
//! cout << "p[1]->sit() = " 
//! << p[1]->sit() << endl; // Illegal 
} ///:~ 
*/