#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
enum note { middleC, Csharp, Cflat }; // Etc. 
class Instrument { 
    public: 
        virtual void play(note) const { 
            cout << "Instrument::play" << endl; 
        } 
        virtual void prepare(){
            cout<< "Prepare in instrument class"<<endl;
        }
}; 
// Wind objects are Instruments 
// because they have the same interface: 
class Wind : public Instrument { 
    public: 
 // Override interface function: 
        void play(note) const { 
            cout << "Wind::play" << endl; 
        } 
        // void prepare()
        // {
        //     cout << "prepare in wind class" <<endl;
        // }
}; 
void tune(Instrument& i) { 
 // ... 
    i.play(middleC); 
    i.prepare();
}
int main(int argc,char **argv){
    Wind flute; 
    tune(flute);
}
/*
//: C15:Instrument3.cpp 
// Late binding with the virtual keyword 
#include <iostream> 
using namespace std; 
enum note { middleC, Csharp, Cflat }; // Etc. 
class Instrument { 
public: 
 virtual void play(note) const { 
 cout << "Instrument::play" << endl; 
 } 
}; 
// Wind objects are Instruments 
// because they have the same interface: 
class Wind : public Instrument { 
public: 
 // Override interface function: 
 void play(note) const { 
 cout << "Wind::play" << endl; 
 } 
}; 
void tune(Instrument& i) { 
 // ... 
 i.play(middleC); 
} 
int main() { 
 Wind flute; 
 tune(flute); // Upcasting 
} ///:~ 

*/