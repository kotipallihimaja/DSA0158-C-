#include<iostream>
int countoccurrences(int arr[],int size,int value)
{
	int count=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==value)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int arr[]={1,2,3,4,5,2,2,6,7,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int value =2;
	int occurrences = countoccurrences(arr,size,value);
	std::cout<<"the number"<<value<<"appears"<<occurrences<<"times in the array."<<std::endl;
	return 0;
}
