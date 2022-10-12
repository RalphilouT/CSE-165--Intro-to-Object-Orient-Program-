#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
class exceptionCLASS{
    //char argument = 'E';
    public:
        exceptionCLASS()
        {
           // cout << "In exceptionCLASS constructor" << endl;
        }
        class exceptionNESTED{
            const char * argumentNESTED;
            public:
                exceptionNESTED(const char * nestedchar): argumentNESTED(nestedchar){
                    //cout << "In exceptionNESTED class constructor and its argument is " << *argumentNESTED << endl;
                };
                ~exceptionNESTED(){
                    //cout << "In exceptionNESTED destructor and argument is " << *argumentNESTED << endl;
                }
                const char * errorIdentity() const
                {
    
                    return argumentNESTED;
                }
        };
        void error() throw(exceptionNESTED)
                {
                    //cout << "In exceptionCLASS member error()" <<endl;
                    //exceptionNESTED throwing(&argument);
                    throw exceptionNESTED("Description of error here in exceptionNested");
                }
        ~exceptionCLASS()
        {
            //cout << "In exceptionCLASS destructor " << endl;
        }
};
int main(int argc,char **argv){

    try
    {
        exceptionCLASS trying; 
        trying.error();
        //cout << "In main trying section " << endl;
    }
    catch(exceptionCLASS::exceptionNESTED& errorDETECT)
    {
        //cout << "In main caught exceptionNESTED " << endl; 
        cout << "Error detected: " << errorDETECT.errorIdentity() << endl;
        
    }
    //cout << "In main after trying and catch " << endl;

}
