#include <iostream>
using namespace std;
class PrimeChecker {
private:
    int number;
public:
    void getData() {
        cout << "Enter a number: ";
        cin >> number;
    }
    bool isPrime() const {
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
    void displayResult() const {
        if (isPrime()) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }
};
int main() {
    PrimeChecker primeChecker;
    primeChecker.getData();
    primeChecker.displayResult();
    return 0;
}
