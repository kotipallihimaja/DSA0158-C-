#include <iostream>
using namespace std;
class Complex 
{
public:
    int real;
    int imag;
    Complex(int r, int i) : real(r), imag(i) {}
    void display() 
	{
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imag <<endl;
    }
};
int main() {
    Complex c1(1, 54);
    Complex *ptr = &c1;
    ptr->display();
    return 0;
}