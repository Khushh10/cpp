#include <iostream>

int main()
{
    int n;
    long long factorial = 1; // Use long long for larger factorials
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0)
    {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    }
    else if (n == 0)
    {
        std::cout << "Factorial of 0 = 1" << std::endl;
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        std::cout << "Factorial of " << n << " = " << factorial << std::endl;
    }
    return 0;
}