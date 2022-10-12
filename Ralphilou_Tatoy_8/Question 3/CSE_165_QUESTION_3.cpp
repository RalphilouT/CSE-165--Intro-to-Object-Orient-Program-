//: C12:IostreamOperatorOverloading.cpp 
// Example of non-member overloaded operators 
#include "PStash.h"
#include "require.h"
#include "PStash.cpp"
#include <iostream> 
#include <sstream> // "String streams" 
#include <cstring> 
using namespace std; 
template<class T, int size = 5>
class IntArray { 
    enum { sz = 5 }; 
    //enum { size }; 
    //size;
    T i[size]; 
    public: 
        IntArray() {
            memset(i, 0, size* sizeof(*i));
        } 
        T& operator[](int x) { 
            require(x >= 0 && x < size,"IntArray::operator[] out of range"); 
            return i[x]; 
        } 
        friend ostream& operator<<(ostream& os, const IntArray<int>& ia); 
        friend istream& operator>>(istream& is, IntArray<int>& ia); 
}; 
//template<class T, int size = 5>
ostream& operator<<(ostream& os, const IntArray<int>& ia) { 
    for(int j = 0; j < ia.sz; j++) { 
        os << ia.i[j]; 
        if(j != ia.sz -1) 
        os << ", "; 
    } 
    os << endl; 
    return os; 
} 
//template<class T, int size = 5>
istream& operator>>(istream& is,IntArray<int>& ia){ 
    for(int j = 0; j < ia.sz; j++) 
    {
        is >> ia.i[j]; 
    }
    return is; 
} 
// template<class T, int size = 5>
// ostream& operator<<(ostream& os, const IntArray<int>& ia) { 
//     for(int j = 0; j < ia.sz; j++) { 
//     os << ia.i[j]; 
//     if(j != sz -1) 
//     os << ", "; 
//     } 
//     os << endl; 
//     return os; 
// } 
// template<class T, int size = 5>
// istream& operator>>(istream& is,IntArray<int>& ia){ 
//     for(int j = 0; j <ia.sz; j++) 
//     is >> ia.i[j]; 
//     return is; 
// } 

int main() { 
    stringstream input("47 34 56 92 103"); 
    IntArray<int> I; 
    input >> I; 
    I[4] = -1; // Use overloaded operator[] 
    cout << I; 
} ///:~




// class IntArray { 
//     enum { sz = 5 }; 
//     int i[sz]; 
//     public: 
//         IntArray() { memset(i, 0, sz* sizeof(*i)); } 
//         int& operator[](int x) { 
//         require(x >= 0 && x < sz, 
//         "IntArray::operator[] out of range"); 
//         return i[x]; 
//         } 
//         friend ostream& 
//         operator<<(ostream& os, const IntArray& ia); 
//         friend istream& 
//         operator>>(istream& is, IntArray& ia); 
// }; 

// ostream& operator<<(ostream& os, const IntArray& ia) { 
//     for(int j = 0; j < ia.sz; j++) { 
//     os << ia.i[j]; 
//     if(j != ia.sz -1) 
//     os << ", "; 
//     } 
//     os << endl; 
//     return os; 
// } 
// istream& operator>>(istream& is, IntArray& ia){ 
//     for(int j = 0; j < ia.sz; j++) 
//     is >> ia.i[j]; 
//     return is; 
// } 
// int main() { 
//  stringstream input("47 34 56 92 103"); 
//  IntArray I; 
//  input >> I; 
//  I[4] = -1; // Use overloaded operator[] 
//  cout << I; 
// } ///: