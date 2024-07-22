#include <iostream>
#include <string>
class BankAccount 
{
private:
    std::string accountHolderName;
    int accountNumber;
    double balance;
public:
    BankAccount(std::string name, int number, double initialBalance) 
        : accountHolderName(name), accountNumber(number), balance(initialBalance) 
		{
        std::cout << "Bank account for " << accountHolderName << " created with balance: $" << balance << std::endl;
    }
    ~BankAccount()
	 {
        std::cout << "Bank account for " << accountHolderName << " closed." << std::endl;
    }
    void deposit(double amount) 
	{
        balance += amount;
        std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
    }
    void withdraw(double amount) 
	{
        if (amount > balance) 
		{
            std::cout << "Insufficient balance!" << std::endl;
        } else {
            balance -= amount;
            std::cout << "Withdrew $" << amount << ". New balance: $" << balance << std::endl;
        }
    }
    double getBalance() const
	 {
        return balance;
    }
};
int main() 
{
    BankAccount account("John Doe", 123456, 500.0);
    account.deposit(150.0);
    account.withdraw(200.0);
    std::cout << "Current balance: $" << account.getBalance() << std::endl;
    return 0;
}
