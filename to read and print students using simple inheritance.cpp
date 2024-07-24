#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void readPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }
    void printPerson() const
	 {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};
class Student : public Person 
{
private:
    int studentID;
public:
    void readStudent() 
	{
        readPerson();
        cout << "Enter student ID: ";
        cin >> studentID;
        cin.ignore(); 
    }
    void printStudent() const
	 {
        printPerson();
        cout << "Student ID: " << studentID << endl;
    }
};
int main() {
    Student student;
    cout << "Enter student details:\n";
    student.readStudent();
    cout << "\nStudent details are:\n";
    student.printStudent();
    return 0;
}