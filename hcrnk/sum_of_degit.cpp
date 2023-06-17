// Program to find Sum of Digits of given Number.

#include <iostream>
#include <conio.h>
#include<stdio.h>
using namespace std;
int main()
{ 
  	int n,r,sum;

  	cout<<"\n Enter any Number : ";
  	cin>>n;

	sum=0;
  	while(n!=0)
  	{
		r=n%10;
		sum=sum+r;
		n=n/10;
  	}

  	cout<<"\n the sum is ="<<sum;
}