#include <iostream>
using namespace std;
int main()
{
    int first, second, add, subtract, multiply;
    float divide;
    cout << "Please enter two integer: ";
    cin >> first;
    cin >> second;
    add        = first + second;
    subtract = first - second;
    multiply = first * second;
    divide     = first / (float)second;  
    cout << endl <<"Sum = " << add;
    cout << endl <<"Difference = " << subtract;
    cout << endl <<"Multiplication = " << multiply;
    cout << endl <<"Division = " << divide; 
    return 0;
}