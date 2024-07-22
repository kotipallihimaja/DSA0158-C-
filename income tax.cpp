#include <iostream>
using namespace std;
class Employee {
private:
    double taxableIncome;
    double tax;
    void calculateTax() {
        if (taxableIncome <= 60000) {
            tax = 0;
        } else if (taxableIncome > 60000 && taxableIncome <= 150000) {
            tax = taxableIncome * 0.05;
        } else if (taxableIncome > 150000 && taxableIncome <= 500000) {
            tax = taxableIncome * 0.1;
        } else {
            tax = taxableIncome * 0.15;
        }
    }
public:
    void input() {
        cout << "Enter taxable income: ";
        cin >> taxableIncome;
        calculateTax();
    }
    void display() const {
        cout << "Taxable Income: " << taxableIncome << endl;
        cout << "Calculated Tax: " << tax << endl;
    }
};
int main() {
    Employee employee;
    employee.input();
    employee.display();
    return 0;
}
