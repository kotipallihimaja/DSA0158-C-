#include <iostream>
using namespace std;
class CharacterCheck 
{
private:
    char ch;
public:
    void getData() 
	{
        cout << "Enter a character: ";
        cin >> ch;
    }
    void checkCase() const {
        if (ch >= 'A' && ch <= 'Z') 
		{
            cout << ch << " is an uppercase letter." << endl;
        } else if (ch >= 'a' && ch <= 'z')
		 {
            cout << ch << " is a lowercase letter." << endl;
        } else 
		{
            cout << ch << " is not an alphabetic character." << endl;
        }
    }
};
int main() 
{
    CharacterCheck charCheck;
    charCheck.getData();
    charCheck.checkCase();
    return 0;
}
