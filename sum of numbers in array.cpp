#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements in the array:";
	cin>>n;
	int*array=new int[n];
	cout<<"enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=array[i];
	}
	cout<<"the sum of all elements in the array is:"<<sum<<endl;
	delete[]array;
	return 0;
}