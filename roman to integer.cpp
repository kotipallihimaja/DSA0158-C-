#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int romanToInt(string s)
{
	unordered_map<char,int> romanvalues={
	{'I', 1},
	{'V', 5},
	{'L', 10},
	{'C', 50},
	{'D', 100},
	{'M', 1000},
	};
	int total=0;
	int prevvalue=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		int currentvalue = romanvalues[s[i]];
		if(currentvalue < prevvalue)
		{
			total-=currentvalue;
		}
		else
		{
			total+=currentvalue;
		}
		prevvalue=currentvalue;
	}
	return total;
	}
	int main()
	{
		string roman;
		cout<<"enter a roman numeral:";
		cin>>roman;
		int result=romanToInt(roman);
		cout<<"the integervalue is:"<<result<<endl;
		return 0;
	}
