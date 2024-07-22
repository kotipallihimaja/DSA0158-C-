#include<iostream>
using namespace std;
int main()
{
	int number,sum=0;
	cout<<"enter a positive number:";
	cin>>number;
	for(int i=1;i<=number/2;i++)
	{
		if(number%i==0)
		{
			sum+=i;
		}
	}
	if(sum>number)
	{
		cout<<number<<"is a abundant number"<<endl;
	}
	else
	{
		cout<<number<<"is not a abudant number"<<endl;
	}
	return 0;
}