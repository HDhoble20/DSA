#include<iostream>
using namespace std;


int main ()
{
    cout<<"Enter the Number To Check isPrimeOrNOt: ";
    int num;
    cin>>num;

    
    int &a=num;
    if(a>1)
    {
        int cnt=0;
        for(int i=2; i<a; i++)
        {
            if(a%i==0)
            {
                cnt++;
            }

        }
        if(cnt==0)
        {
           cout<<a<<" is Prime Number!";
        }
        else{
            cout<<num<<" is Not Prime Number ";
        }


    }
    
}
    
