#include<iostream>
using namespace std;

string rev_string(string cls) {
    string rev;
    int len = cls.length();
    for(int i = len - 1; i >= 0; i--) {
        rev += cls[i];
    }
    return rev;
}

int main() {
    string name;
    cout << "Enter a string to reverse: ";
    cin >> name;
    cout << "Reversed string: " << rev_string(name) << endl;
    return 0;
}