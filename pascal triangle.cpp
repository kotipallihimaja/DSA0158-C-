#include <iostream>
#include <vector>
using namespace std;
unsigned long long factorial(int n) 
{
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) 
	{
        fact *= i;
    }
    return fact;
}
unsigned long long binomialCoefficient(int n, int r)
 {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
void printPascalsTriangle(int rows) 
{
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < rows - i - 1; ++j)
		 {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j)
		 {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }
}
int main() 
{
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;
    printPascalsTriangle(rows);
    return 0;
}
