#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    virtual void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    virtual void displaydata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    virtual void bonus() {
        cout << "Bonus calculation for Person." << endl;
    }
};
class Admin : virtual public Person {
protected:
    string department;
public:
    void getdata() override {
        Person::getdata();
        cout << "Enter department: ";
        cin >> department;
    }
    void displaydata() override {
        Person::displaydata();
        cout << "Department: " << department << endl;
    }
    void bonus() override {
        cout << "Bonus calculation for Admin." << endl;
    }
};
class Account : virtual public Person {
protected:
    double salary;
public:
    void getdata() override {
        Person::getdata();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displaydata() override {
        Person::displaydata();
        cout << "Salary: " << salary << endl;
    }
    void bonus() override {
        cout << "Bonus calculation for Account." << endl;
    }
};
class Master : public Admin, public Account {
public:
    void getdata() override {
        Admin::getdata(); 
        Account::getdata();
    }
    void displaydata() override {
        Admin::displaydata(); 
        Account::displaydata();
    }
    void bonus() override {
        cout << "Bonus calculation for Master." << endl;
    }
};
int main() {
    Master emp;
    emp.getdata();
    emp.displaydata();
    emp.bonus();

    return 0;
}
