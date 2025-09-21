#include <iostream>
using namespace std;

int square(int x)
{
    return x * x;
}

void displaySquare(int num)
{
    int result = square(num);
    cout << "The square of " << num << " is " << result << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    displaySquare(n);
    return 0;
}
