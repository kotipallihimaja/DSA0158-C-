#include<iostream>
using namespace std;
bool isneon(int number)
{
	int square=number*number;
	int sumofdigits=0;
	while(square!=0)
	{
		sumofdigits+=square%10;
		square/=10;
	}
	return(sumofdigits==number);
}
int main()
{
	int number;
	cout<<"enter a positive integer:";
	cin>>number;
	if(isneon(number))
	{
		cout<<number<<"is a neon number"<<endl;
	}
	else
	{
		cout<<number<<"is not a neon number"<<endl;
	}
	return 0;
}

