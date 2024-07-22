#include <iostream>
using namespace std;
void displayNumbers(int a = 1, int b = 2, int c = 3, int d = 4) {
    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d <<endl;
}
int main() 
{
    displayNumbers(10, 15, 25, 30);
    displayNumbers(25,30);
    return 0;
}
