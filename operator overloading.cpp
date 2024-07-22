#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex &other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex &other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    void display() const {
        cout << real << "+" << imag << "i" << endl;
    }
};
int main() {
    Complex c1(4, 5);
    Complex c2(2, 2);
    Complex sum = c1 + c2;  
    Complex diff = c1 - c2; 
    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    return 0;
}
