#include <iostream>
#include <string>
using namespace std;
class Employee 
{
protected:
    string emp_name;
    int emp_id;
    double basic_salary;
public:
    Employee(string name, int id, double salary) : emp_name(name), emp_id(id), basic_salary(salary) {}
    virtual void calculatePay() =0;
    void display() 
	{
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
};
class Pay : public Employee 
{
private:
    double gross_pay;
    double net_pay;
    const double HRA_PERCENTAGE = 0.2;  
    const double DA_PERCENTAGE = 0.1;   
    const double TAX_PERCENTAGE = 0.1;  
public:
    Pay(string name, int id, double salary) : Employee(name, id, salary), gross_pay(0), net_pay(0) {}
    void calculatePay() override 
	{
        double HRA = basic_salary * HRA_PERCENTAGE;
        double DA = basic_salary * DA_PERCENTAGE;
        gross_pay = basic_salary + HRA + DA;
        double tax = gross_pay * TAX_PERCENTAGE;
        net_pay = gross_pay - tax;
    }
    void displayPay() 
	{
        calculatePay(); 
        cout << "Gross Pay: " << gross_pay << endl;
        cout << "Net Pay: " << net_pay << endl;
    }
};
int main() 
{
    string name;
    int id;
    double salary;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter basic salary: ";
    cin >> salary;
    Pay employee(name, id, salary);
    cout << "\nEmployee Details:\n";
    employee.display();
    cout << "\nPay Details:\n";
    employee.displayPay();
    return 0;
}
