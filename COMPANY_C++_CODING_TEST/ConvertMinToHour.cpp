/*
Que 3:-
Assuming an array which has 5 elements with the following initial values for time in minutes:
{12.0, 15.0, 24.0, 90.0, 120.0}
Write a C++ program to convert these values in the same array to hours, as shown below:
{0.2, 0.25, 0.4, 1.5, 2.0}
You must use a function named  Conv_To_Hour  that should take the array as input.*/

#include<iostream>
using namespace std;
void Conv_To_Hour(float arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]/60.0f;
        cout<<arr[i]<<" ";

    }
}
int main()
{
    float arr[5]={12.0f,15.0f,24.0f,90.0f,120.0f};
    Conv_To_Hour(arr,5);


}
