#include<iostream>
#include<cmath>
#include<stdexcept>
using namespace std;
double calculatesquareroot(int number)
{
	if(number<0)
	{
		throw invalid_argument("cannot calculate the square root of negative number");
	}
	return sqrt(number);
}
int main()
{
	int number;
	cout<<"enter an integer:";
	cin>>number;
	try
	{
		double result=calculatesquareroot(number);
		cout<<"the square root of"<<number<<"is"<<result<<endl;
	}
catch (const invalid_argument& e)
 {
        cout << "Error: " << e.what() << endl;
    }
	return 0;
}
