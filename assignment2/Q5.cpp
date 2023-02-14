//write a program to calculate the sum of digits of a 3 digit number.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout <<"enter the value of three disit:";
	cin>>n;
	int d1,d2,d3;
	d1=n/100;
	n=n%100;
	d2=n/10;
	n=n%10;
	d3=n;
	int sum=d1+d2+d3;
	cout<<"the sum of three digit number:"<<sum;
	return 0;
	
}
