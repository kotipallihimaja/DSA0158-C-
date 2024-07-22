#include <iostream>
#include <cctype>
using namespace std;
bool isValidUsername(const string& username) 
{
    if (username.length() < 5 || username.length() > 15) 
	{
        return false;
    }
    for (char ch : username) 
	{
        if (!isalnum(ch)) 
		{
            return false;
        }
    }
    return true;
}
int main() 
{
    string username;
    cout << "Enter a username: ";
    cin >> username;
    if (isValidUsername(username)) 
	{
        cout << "The username '" << username << "' is valid." << endl;
    } else {
        cout << "The username '" << username << "' is not valid." << endl;
    }
    return 0;
}
