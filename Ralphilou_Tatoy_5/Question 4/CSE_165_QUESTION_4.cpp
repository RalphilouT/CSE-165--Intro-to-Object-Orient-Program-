#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
class randomCLASS{
    public:
        randomCLASS*address(void){
            return this;
        }
        int test1,test2,test3,test4;
        randomCLASS(): test1(1),test2(2),test3(3),test4(4){}
        virtual void function1(){}
        virtual void function2(){}     
};
class derived:public randomCLASS
{
    public:
        void function1(){cout << "In derived"<<endl;}
};



int main(int argc,char **argv){
    randomCLASS data;
    randomCLASS * pointerDATA;
    pointerDATA = &data;
    size_t size = sizeof(randomCLASS);
    pointerDATA = data.address();
    cout << pointerDATA <<endl;
    int randomCLASS::*pointer1 = &randomCLASS::test1;
    int randomCLASS::*pointer2 = &randomCLASS::test2;
    int randomCLASS::*pointer3 = &randomCLASS::test3;
    int randomCLASS::*pointer4 = &randomCLASS::test4;
    void (randomCLASS::*fptr1)() = &randomCLASS::function1;
    void (randomCLASS::*fptr2)() = &randomCLASS::function2;
    cout << "Address of randomCLASS: " << pointerDATA<<endl;
    cout <<"Found int test1 address: " << (void *)&(data.*pointer1)<<endl;
    cout << "The data of test1 = " << pointerDATA->test1 <<endl;
    cout <<"Found int test2 address: " << (void *)&(data.*pointer2)<<endl;
    cout << "The data of test2 = "<< pointerDATA->test2 <<endl;
    cout <<"Found int test3 address: " << (void *)&(data.*pointer3)<<endl;
    cout << "The data of test3 = " << pointerDATA->test3<<endl;
    cout <<"Found int test4 address: " << (void *)&(data.*pointer4)<<endl;
    cout << "The data of test4 = " <<endl;
    cout <<"Found virtual void function1 address: "<< &fptr1 << endl;
    cout <<"Found virtual void function2 address: "<< &fptr2 << endl;
    
    
    cout <<endl;

    cout <<"The order of which is found first" << endl;
    
    for(size_t i = 0;i<size;i++)
    {
        if((void *)&(data.*pointer1) == (int*)(((char*)pointerDATA)+ i))
        {
            cout << "Found int test1 " << "it is at " << (int*)(((char*)pointerDATA)+ i) <<endl;
            cout << "We can also use the address to gain acccess to the data which is: " << *((int*)(((char*)pointerDATA)+i))<<endl<<endl;
        }
        else if((void *)&(data.*pointer2) == (int*)(((char*)pointerDATA)+ i))
        {
            cout << "Found int test2 " << "it is at " << (int*)(((char*)pointerDATA)+ i) <<endl;
            cout << "We can also use the address to gain access to the data which is: " << *((int*)(((char*)pointerDATA)+i)) <<endl<<endl;
        }
        else if((void *)&(data.*pointer3) == (int*)(((char*)pointerDATA)+ i) )
        {
            cout << "Found int test3 " << "it is at " << (int*)(((char*)pointerDATA)+ i) <<endl;
            cout << "We can also use the address to gain access to the data which is: "<< *((int*)(((char*)pointerDATA)+i)) <<endl<<endl;
        }
        else if((void *)&(data.*pointer4) == (int*)(((char*)pointerDATA)+ i))
        {
            cout << "Found int test4 " << "it is at " << (int*)(((char*)pointerDATA)+ i) <<endl;
            cout << "We can also use the address to gain access to the data which is: " << *((int*)(((char*)pointerDATA)+i))<<endl<<endl;
        }
        else if((int*)&fptr2 == ((int*)(((char*)pointerDATA)+ i)))
        {
            cout << "Found virtual void function2 " << "it is at " << &fptr2 <<endl;
        }
        else if((int*)&fptr1 == ((int*)(((char*)pointerDATA)+ i)))
        {
            
            cout << "Found virtual void function1 " << "it is at " << &fptr1 <<endl;
        }
    }
    cout <<endl;
    cout << "When starting from class address, we only find int members as the address of virtual void functions can be found before the class address" <<endl;
    cout << "The compiler will make space for the vtable..." <<endl;
    cout << "Address of randomCLASS: " << pointerDATA<<endl;
    cout <<"Found virtual void function1 address: "<< &fptr1 << endl;
    //cout << "The data of the function1 address: " << *(&fptr1) <<endl<<endl;
    // cout << &(*(&fptr1)) <<endl;
    // cout <<endl;
    cout <<"Found virtual void function2 address: "<< &fptr2 << endl;
    //cout << "The data of the function1 address: " <<*(&fptr2) <<endl <<endl;
    
    
}
