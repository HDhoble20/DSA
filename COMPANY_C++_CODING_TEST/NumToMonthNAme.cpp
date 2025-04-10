/*Que 4:-
Write a program that asks for an integer (1-12) representing the month, and depending on the input,show
 the month name as a word (in English). Use a switch statement.
Forexample for1itshouldprint Jan*/

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the Number Between 1-12 :-  ";
    int num;
    cin>>num;
    switch (num)
    {
    case 1:
        cout<<"Jan";
        break;
    case 2:
         cout<<"Feb";
         break;
    case 3:
         cout<<"March";
         break;
    case 4:
         cout<<"April";
         break;
    case 5:
          cout<<"May";
        break;
    case 6:
          cout<<"June";
          break;
    case 7:
           cout<<"July";
           break;
    case 8:
           cout<<"August";
           break;
    case 9:
           cout<<"September";
           break;
    case 10:
           cout<<"October";
           break;
    case 11:
           cout<<"November";
           break;
    case 12:
           cout<<"December";
           break;
    default:
        break;
    }
    return 0;
}
