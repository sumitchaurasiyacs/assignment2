//Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"enter the value of five digit";
	cin>>n;
	int d1,d2,d3,d4,d5;
	d1=n/10000;
	n=n%10000;
	
	d2=n/1000;
	n=n%1000;
	
	d3=n/100;
	n=n%100;
	
	d4=n/10;
	n=n%10;
	
	d5=n;
	
	int sum=d1+d4;
	cout<<"sum of first digit and second last disit"<<sum;
	
	return 0;
	
	
}

