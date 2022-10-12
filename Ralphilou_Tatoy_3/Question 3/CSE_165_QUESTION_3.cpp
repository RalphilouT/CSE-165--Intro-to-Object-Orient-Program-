//{L} printBinary 
//{T} 3.14159 
#include <cstdlib> 
#include <iostream> 
#include "StackOfInt.h" 

using namespace std; 
int main(int argc, char* argv[]) { 
    StackOfInt stack;
    int choice = 0;
    while(choice != -1)
    {
        int input = 0;
        cout << "Enter 1 to push" <<endl;
        cout << "Enter 2 to pop" <<endl;
        cout << "Enter 3 to display all number" <<endl;
        cout << "Enter 4 to show newest number" <<endl;
        cout << "Enter -1 to terminate" <<endl;
        cout << "Answer: ";
        cin >> choice;
        if(choice == 1)
        {
            while(input !=-1)
            {
                cout << "Enter what to push or enter -1 to stop: ";
                cin >> input;
                if(input == -1)
                {
                    break;
                }
                stack.pushINT(input);
            }
            
        }
        else if (choice == 2)
        {
            cout << "Enter 1 to pop all or 2 for newest number: ";
            cin >> input;
            if(input == 1)
            {
                while ( !stack.isemptyINT() )
                {
                    cout << "Popped " << stack.popINT() << endl;
                    
                }
            }
            else{
                 cout << "Popped " << stack.popINT() << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "The numbers are ..." <<endl;
            stack.displayINT();
        }
        else if (choice == 4)
        {
            cout << "The newest number to enter is " << stack.showINT() << endl;
        }
        else if (choice == -1)
        {
            break;
        }
    }
    
    return 0;
}