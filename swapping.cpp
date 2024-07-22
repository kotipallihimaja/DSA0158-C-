#include <iostream>
using namespace std;
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue - a: " << a << ", b: " << b << endl;
}
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference - a: " << a << ", b: " << b << endl;
}
int main() {
    int num1 = 5, num2 = 10;
    cout << "Original values - num1: " << num1 << ", num2: " << num2 << endl;
    swapByValue(num1, num2);
    cout << "After swapByValue - num1: " << num1 << ", num2: " << num2 << endl;
    swapByReference(num1, num2);
    cout << "After swapByReference - num1: " << num1 << ", num2: " << num2 << endl;
    return 0;
}
