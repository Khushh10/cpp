#include <iostream>
using namespace std;

class Calculator {
public:
    // Function overloading
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 ints: " << calc.add(3, 4) << endl;
    cout << "Sum of 2 doubles: " << calc.add(2.5, 3.7) << endl;
    cout << "Sum of 3 ints: " << calc.add(1, 2, 3) << endl;

    return 0;
}
