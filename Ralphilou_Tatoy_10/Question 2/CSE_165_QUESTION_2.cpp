#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype>
using namespace std;

class hangmanGAME
{
    map<char,bool> character;
    public:
        hangmanGAME()
        {
            for(char guess = 'a'; guess <= 'z'; guess++)
            {
                character.insert(make_pair(guess,false));
            }
        }
        void addletter(char characterADD)
        {
            character[characterADD] = true;
        }
        bool decision(char characterGUESS)
        {
            int checking;
            checking = character[tolower(characterGUESS)];
            return checking;
        }

};
void hangmanSTART()
{
    ifstream words("words.text",ios::in);
    srand(time(0));
    vector <string> wordBANK;
    string getfromfile;
    string wordsPLAYED;
    int i = 0;
    int indexCHOSEN;
    if(words.is_open())
    {
        // while(getline(words, getfromfile))
        // {
        //     wordBANK.push_back(getfromfile);
        // }
        while(words >> getfromfile)
        {
            wordBANK.push_back(getfromfile);
        }
        //wordBANK.push_back(chosen);
    }
    indexCHOSEN = rand() & wordBANK.size()-1;
    wordsPLAYED = wordBANK[indexCHOSEN];
    //cout << wordsPLAYED << endl;
    int turns;
    turns = 5;
    string * guess;
    hangmanGAME characterGUESSALREADY;
    while(turns != 0)
    {
        cout << "You have " << turns << " left. Use it wisely." << endl;
        for_each(wordsPLAYED.begin(),wordsPLAYED.end(), [&characterGUESSALREADY](char guessing)
        {
            if(characterGUESSALREADY.decision(guessing))
            {
                cout << guessing << " ";

            }
            else{
                cout << "_" << " ";
            }
        });
        cout << endl;
        int move;
        cout << "Enter 1 to guess new character..."<< endl;
        cout << "Enter 2 to guess the whole word" << endl;
        cin >> move;
        if(move == 1)
        {
            cout << "Enter the your character of choise: ";
            char charGUESS;
            cin >> charGUESS;
            if(isalpha(charGUESS))
            {
                characterGUESSALREADY.addletter(tolower(charGUESS));
            }
        }
        else if(move == 2){
            string input;
            cout << "Enter your guess (word): ";
            cin >> input;
            //cout << wordsPLAYED;
            //cout << input;
            if(wordsPLAYED == input)
            {
                cout << "You have chosen correctly...";
                return;
            }
            else{
                cout << "You are not correct" << endl;
                turns--;
                continue;
            }

        }
        else 
        {
            cout << "Learn how to follow instruction" << endl;
            break;

        }
        turns--;
    }

    cout << "No More Words..." << endl;
    // for(int i = 0; i < wordBANK.size();i++)
    // {
    //     cout << wordBANK[i] << endl;
    // }
    words.close();


}
int main(int argc,char **argv){
    hangmanSTART();
}