#include <iostream>
using namespace std;
void findGreatest(int* num1, int* num2, int* num3, int* greatest) {
    *greatest = *num1;
    if (*num2 > *greatest) {
        *greatest = *num2;
    }
    if (*num3 > *greatest) {
        *greatest = *num3;
    }
}
int main() {
    int a, b, c, greatest;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    findGreatest(&a, &b, &c, &greatest);
    cout << "The greatest number is: " << greatest << std::endl;
    return 0;
}
