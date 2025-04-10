#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter the Number 'press -100' for stop: ";
	int n=0;
	int sum=0;
	while(n!=(-100))
 {
 	sum=sum+n;
 	cin>>n;
 }
 
 cout<<"Answer:-  "<<(sum*sum);
}
