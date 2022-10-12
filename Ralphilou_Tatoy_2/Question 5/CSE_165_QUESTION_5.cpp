#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits.h>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;
struct NODE{
    NODE * next;
    NODE * last;
    int number;
    NODE(int data)
    {
        number = data;
        next = NULL;
    }
    

};
void structAddress(NODE * argumentNODE, int length){
    NODE * temp1 = argumentNODE;
    for(int i =length-1; i>0;i--)
    {
        NODE * temp2 = new NODE(i);
        temp1->next = temp2;
        temp1->last = temp1->next;
        temp1 = temp2;
    }
    NODE * end = new NODE(0);
    temp1->next = end;

}
void fineEND(NODE * argumentNODE)
{
    int stop = 1;
    NODE * temp = argumentNODE;
    while(temp->number != 0 && temp->next != NULL)
    {
        cout << temp->next << " "<<temp->number <<endl;
        temp = temp->next;
    }
    cout << temp->next << " "<<temp->number <<endl;
    
}
int main(int argc,char **argv)
{
    int length;
    cout << "Lenght of linkedlist: ";
    cin >> length;
    NODE * head =  new NODE(length);
    head->last = head;
    structAddress(head,length);
    fineEND(head);
}