#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    string regno;
    int mark1, mark2, mark3;
    float average;
    char grade;
    void calculateGrade() {
        average = (mark1 + mark2 + mark3) / 3.0;
        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'C';
        } else if (average > 60) {
            grade = 'D';
        } else if (average > 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter registration number: ";
        cin >> regno;
        cout << "Enter mark1: ";
        cin >> mark1;
        cout << "Enter mark2: ";
        cin >> mark2;
        cout << "Enter mark3: ";
        cin >> mark3;
        calculateGrade();
    }
    void display() const {
        cout << "Name: " << name <<  endl;
        cout << " Registration Number: " << regno << endl;
        cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
        cout << "Average: " << average << ", Grade: " << grade << endl;
    }
};
int main() {
    const int numStudents = 1;
    Student students[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].input();
    }
    cout << "\nStudent Records:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].display();
    }
    return 0;
}
