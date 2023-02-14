//Design a calculator to perform basic arithmetic operations (+,-,/,*)
#include<iostream>
using namespace std;
int main()
{
	float number1,number2;
	cout<<"enter the value of number1 and number2:";
	cin>>number1>>number2;
	float sum=number1+number2;
	float diff=number1-number2;
	float multi=number1*number2;
	float devide=number1/number2;
	cout<<sum<<endl<<diff<<endl<<multi<<endl<<devide;
	return 0;
}
