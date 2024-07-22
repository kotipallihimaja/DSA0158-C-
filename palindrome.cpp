#include<iostream>
#include<string>
using namespace std;
string palin(const string& str )
{
    int n=str.length();
    for(int i=0;i<n/2;i++)
    {
        if(str[i]==str[i-n-1])
        {
            cout<< "notpalindrom";
        }
    }
    cout<< "palindrom";
}
int main()
{
    string input;
    cout<<"enter the string:";
    cin>>input;
    /*if(palin(input))
    {
        cout<<"palindrom";
    }
    else{
        cout<<"not palindrom";
        
    }
    return 0;*/
    palin(input);
    return 0;
}