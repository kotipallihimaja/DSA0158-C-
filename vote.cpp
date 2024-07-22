#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"Eligible to vote"<<endl;
	}
	else
	{
		cout<<"You are not eligible to vote"<<endl;
		cout<<"You will be eligible after "<<18-age<<"years to vote";
	}
	return 0;
}