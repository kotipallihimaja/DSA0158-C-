#include<iostream>
using namespace std;
class call
{
	public:
	static int add(int a,int b)
	{
		return (a+b);
	}
	static int add(int a,int b,int c)
	{
		return(a+b+c);

	}};
	int main()
	{
		
		cout<<"function1:"<<call::add(10,15)<<endl;
		cout<<"function2:"<<call::add(5,3,2)<<endl;
		return 0;
	}