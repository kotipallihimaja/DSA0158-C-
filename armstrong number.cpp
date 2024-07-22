#include <iostream>  
using namespace std;  
int main()  
{  
int number,rem,sum=0,temp;    
cout<<"Enter the Number=  ";    
cin>>number;    
temp=number;    
while(number>0)    
{    
rem=number%10;    
sum=sum+(rem*rem*rem);    
number=number/10;    
}    
if(temp==sum)    
cout<<"the number is Armstrong Number."<<endl;    
else    
cout<<"the number is Not Armstrong Number."<<endl;   
return 0;  
}  