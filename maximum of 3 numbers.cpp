#include <iostream>
using namespace std;
class MaxOfThree
 {
private:
    int num1, num2, num3;
public:
    void getData() 
	{
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter third number: ";
        cin >> num3;
    }
    int findMax() const 
	{
        int max = num1;
        if (num2 > max) 
		{
            max = num2;
        }
        if (num3 > max)
		 {
            max = num3;
        }
        return max;
    }
    void displayMax() const 
	{
        cout << "The maximum of the three numbers is: " << findMax() << endl;
    }
};
int main() 
{
    MaxOfThree maxFinder;
    maxFinder.getData();
    maxFinder.displayMax();
    return 0;
}
