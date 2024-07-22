#include <iostream>
class Number {
private:
    int value;
public:
    Number(int val) : value(val) {}
    Number operator+(const Number& other) const {
        return Number(this->value + other.value);
    }
    int getValue() const {
        return value;
    }
};
int main() {
    Number num1(10);
    Number num2(20);
    Number sum = num1 + num2;
    std::cout << "The sum of " << num1.getValue() << " and " << num2.getValue() << " is " << sum.getValue() << std::endl;
    return 0;
}
