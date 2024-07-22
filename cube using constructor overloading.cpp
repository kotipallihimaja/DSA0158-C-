#include <iostream>
using namespace std;

class CubeCalculator {
private:
    int number;
    int cube;
    void calculateCube() {
        cube = number * number * number;
    }
public:
    CubeCalculator() : number(0), cube(0) {
        calculateCube();
    }
    CubeCalculator(int num) : number(num) {
        calculateCube();
    }
    void displayCube() const {
        cout << "The cube of " << number << " is " << cube << endl;
    }
};
int main() 
{
    CubeCalculator cube1;
    cube1.displayCube(); 
    CubeCalculator cube2(3);
    cube2.displayCube();  
    return 0;
}
