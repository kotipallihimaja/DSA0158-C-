#include <iostream>
using namespace std;
int main() 
{
    double principal, rate, time;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;
    double simpleInterest = (principal * rate * time) / 100;
    cout << "The simple interest is: " << simpleInterest << endl;
    return 0;
}
