#include<iostream>
#include<string>
using namespace std;
int countcharacters(const string&str)
{
	return str.length();
}
int main()
{
	string inputstring;
	cout<<"enter a string:";
	getline(cin,inputstring);
	int charactercount=countcharacters(inputstring);
	cout<<"the number of characters in the string is:"<<charactercount<<endl;
	return 0;
}