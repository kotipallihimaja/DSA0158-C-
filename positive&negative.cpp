#include<iostream>
using namespace std;
int main()
{
	float num;
	cout<<"enter a number:";
	cin>>num;
	if(num>0)
	{
		cout<<num<<"positive"<<endl;
	}
	else
	if(num<0)
	{
		cout<<num<<"negative"<<endl;
	}
	else{
		cout<<num<<"zero"<<endl;
	}
	return 0;
}