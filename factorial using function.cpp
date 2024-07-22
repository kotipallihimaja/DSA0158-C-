#include<iostream>
using namespace std;
int factorial(int n)
{
	if (n<0)
	{
		return -1;
	}
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int number;
	cout<<"enter a number:";
	cin>>number;
	int result=factorial(number);
	if (result==-1)
	{
		cout<<"factoral of negative number is not possible"<<endl;
	}
	else
	{
		cout<<"factorial of"<<number<<"is"<<result<<endl;
	}
	return 0;
}