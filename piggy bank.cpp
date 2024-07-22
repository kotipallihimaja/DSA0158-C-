#include <iostream>
class AddAmount
 {
protected:
    int amount;
public:
    AddAmount() : amount(50) {}
    virtual void addAmount() = 0; 
    int getAmount() const
	 {
        return amount;
    }
};
class NoAddAmount : public AddAmount {
public:
    void addAmount() override 
	{
    }
};
class AddSomeAmount : public AddAmount {
private:
    int addValue;
public:
    AddSomeAmount(int value) : addValue(value) {}
    void addAmount() override {
        amount += addValue;
    }
};
int main()
 {
    NoAddAmount noAdd;
    noAdd.addAmount();
    std::cout << "Final amount in Piggie Bank (NoAddAmount): $" << noAdd.getAmount() << std::endl;
    AddSomeAmount addSome(20); 
    addSome.addAmount();
    std::cout << "Final amount in Piggie Bank (AddSomeAmount): $" << addSome.getAmount() << std::endl;
    return 0;
}
