#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    int matrix[n][n];
    cout << "Enter the elements of the matrix:" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][i];
    }
    cout << "The sum of the elements in the main diagonal is: " << sum << endl;
    return 0;
}
