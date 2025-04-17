#include<iostream>
using namespace std;
int main()
{
    int temp,i,j,n;
    cout<<"Enter the no of element you want to store";
    cin>>n;
    cout<<"Enter the element in arraay";
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   
    for ( i = 0; i < n; i++)
    {
       for(j=0;j<n-i-1;j++)
       {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
       }
    }

    cout<<"After swap";
    for(i=0;i<n;i++)
    {
       cout<< a[i];
    }
    

}
