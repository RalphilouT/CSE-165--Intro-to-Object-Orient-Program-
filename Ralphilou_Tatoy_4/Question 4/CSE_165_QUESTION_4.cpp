#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <fstream>
using namespace std;
class text{
    public:
        string words = "";
        text(){};
        text(string namefile)
        {
            ifstream oFile(namefile);
            //cout <<"opening";
            string buffer;
            if(oFile.is_open())
            {
                //cout<< "open";
                while(getline(oFile,buffer))
                {
                    words+=buffer;
                    words += "\n";
                }
                oFile.close();
            }
            else{
                cout << "Can't open file" <<endl;
            }
            //cout << words;
        }
        string content()
        {
            return words;
        }

};

int main(int argc,char **argv){
    string filename;
    string output;
    filename = "question4text.txt";
    text  test = text(filename);
    //filename = "question4text.txt";
    //text(filename);
    output = test.content();
    //cout << "hello";
    cout << output;
}