#include <iostream>

class Calculator {
private:
    // Private data members (implementation details hidden from the user)
    int result=0;

    // Private helper function (implementation detail hidden)
    void updateResult(int value) {
        result = value;
    }

public:

    void add(int num) {
        result += num;
        // The user doesn't need to know how 'result' is updated internally.
    }

    void subtract(int num) {
        result -= num;
        // The user only interacts with the 'subtract' function.
    }

    int getResult() {
        return result;
    }
};

int main() {
    Calculator myCalculator;

    myCalculator.add(10); // User calls 'add', doesn't know about 'result' or 'updateResult' directly
    myCalculator.subtract(5); // User calls 'subtract'
    
    std::cout << "Current result: " << myCalculator.getResult() << std::endl; // User gets the result

    return 0;
}