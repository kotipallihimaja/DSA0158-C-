#include <iostream>
class CubeCalculator
 {
private:
    int number;
    int cube;
public:
    CubeCalculator(int num) : number(num), cube(0) {}
    ~CubeCalculator() {
        cube = number * number * number;
        std::cout << "The cube of " << number << " is " << cube << std::endl;
    }
};
int main() 
{
    CubeCalculator calc(3);
    return 0;
}
