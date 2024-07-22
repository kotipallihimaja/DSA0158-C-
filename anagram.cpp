#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return (str1 == str2);
}
int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    if (areAnagrams(str1, str2)) {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are anagrams." << endl;
    } else {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are not anagrams." << endl;
    }
    return 0;
}
