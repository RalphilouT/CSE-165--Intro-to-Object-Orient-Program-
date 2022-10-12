//Ralphilou Tatoy
#include <iostream>
#include <string>

using namespace std;
int main(int argc,char **argv)
{
    string user;
    int map = 100;
    while(map != 0)
    {
        cout << "Enter basic colors capitalize (enter 'exit' to break): ";
        cin >> user;
        
        if (user == "BLUE")
        {
            map = 1;
        }
        else if(user == "GREEN"){
            map = 2;
        }
        else if(user == "VIOLET"){
            map = 3;
        }
        else if(user == "RED"){
            map = 4;
        }
        else if(user == "ORANGE"){
            map = 5;
        }
        else if(user == "exit"){
            cout << "Thank you";
            break;
        }
        else{
            cout << "Be more basic!";
        }
        switch (map)
        {
            case 1:cout << "Complementary is Orange" << endl;
                break;
            case 2:cout << "Complementary is Red" << endl;
                break;
            case 3:cout << "Complementary is Yellow" << endl;
                break;
            case 4:cout << "Complementary is Green" << endl;
                break;
            case 5:cout << "Complementary is Blue" << endl;
                break;
            default:cout <<"Try Again" << endl;

        }
        // switch(user){
        //     case "blue":

        // }
    }
    return 0;
}