//Write a program to check whether two numbers (entered by user) are equal or not (0 for not equal, 1
//for equal)
#include<iostream>
using namespace std;
int main()
{
	int number1,number2;
	cout<<"enter the value of number1 and number2";
	cin>>number1>>number2;
    cout<<(number1==number2)?1:0;
    return 0;
}
