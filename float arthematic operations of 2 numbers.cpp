#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float num1,num2;
	cout<<"enter the first number";
	cin>>num1;
	cout<<"enter the second number";
	cin>>num2;
	float addition =num1+num2;
	cout<<"addition:"<< addition <<endl;
	float subtraction=num1-num2;
	cout<<"subtaction:"<<subtraction<<endl;
	float multiplication=num1*num2;
	cout<<"multiplication:"<<multiplication<<endl;
	if(num2!=0)
	{
		float division=num1/num2;
		cout<<"division:"<<division<<endl;
	}
	else
	{
		cout << "division by zero is not allowed."<<endl;
	}
	if(num2!=0)
	{
		float module=fmod(num1,num2);
		cout<<"module:"<<module<<endl;
	}
	else
	{
		cout << "module by zero is not allowed."<< endl;
	}
	return 0;
}