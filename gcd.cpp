#include <iostream>
using namespace std;

int main()
{
    int nums[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> nums[i];
    }

    int result = nums[0];

    for (int i = 1; i < 5; i++)
    {
        int a = result;
        int b = nums[i];

        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }

        int gcd = a;
        result = (result * nums[i]) / gcd;
    }

    cout << "LCM of the given numbers = " << result << endl;
    return 0;
}
