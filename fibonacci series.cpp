#include <iostream>
using namespace std;
class Series {
private:
    int num;
public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }
    void show() {
        if (num <= 0) {
            cout << "Please enter a positive integer." << endl;
            return;
        }
        int first = 0, second = 1, next;
        cout << "Fibonacci series up to " << num << " terms: " << endl;
        for (int i = 0; i < num; i++) {
            if (i <= 1)
                next = i;
            else {
                next = first + second;
                first = second;
                second = next;
            }
            cout << next << " ";
        }
        cout << endl;
    }
};
int main() {
    Series series;
    series.input();
    series.show();
    return 0;
}
