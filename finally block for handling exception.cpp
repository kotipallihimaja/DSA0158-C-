#include <iostream>
#include <functional>
#include <stdexcept>

// Class to mimic the finally block functionality
class Finally {
public:
    // Constructor that takes a function to execute upon destruction
    Finally(std::function<void()> func) : func_(func) {}
    
    // Destructor executes the stored function
    ~Finally() {
        func_();
    }

private:
    std::function<void()> func_;
};

void functionThatThrows() {
    throw std::runtime_error("An exception occurred");
}

int main() {
    try {
        Finally onExit([] {
            std::cout << "This will be executed in the finally block, regardless of exception.\n";
        });

        std::cout << "Doing some work...\n";
        functionThatThrows();
        std::cout << "This will not be printed due to the exception.\n";
    } catch (const std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << '\n';
    }

    return 0;
}
