#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
class nest;
class egg;
class hen;
// class nest
// {
    
//     void display(){
//         cout << "nest";
//     }
//     friend hen;
//     friend egg;
//     //int number;
//     public:
//         friend hen;
//         friend egg;
//         class hen
//         {
//             void display(){
//                 cout << "Hen";
//             }
//             public:
//                 friend egg;
//                 friend nest;
//                 class egg
//                 {
//                     void display(){
//                         cout << "Hen";
//                     }
//                     public:
//                         friend hen;
//                         friend nest;
//                 };
//         };
    
// };
class nest{
    public:
        nest(){};
        void display(){
            cout << "Nest"<<endl;
        }
        class hen{
            public:
                void authorizeHEN()
                {
                    display();
                }
                class egg {  
                    public:
                        void authorizeEgg()
                        {
                            display();
                        }
                    private:
                        void display(){
                            cout << "Egg" <<endl;
                        }
                };
            private:
                void display(){
                    cout << "Hen"<<endl;
                }
        };
};
int main(int argc,char **argv)
{
    nest one;
    nest::hen two;
    nest::hen::egg three;
    // nest::hen two;
    // nest::hen::egg three;
    one.display();
    two.authorizeHEN();
    three.authorizeEgg();
    //two.display();
    
}