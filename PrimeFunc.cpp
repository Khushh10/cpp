#include <iostream>
using namespace std;
int prime(int num)
{
    int temp = num / 2, cnt = 0;
    if (num > 3)
    {
        for (int i = 1; i <= temp; i++)
        {
            if (num % i != 0)
            {
                cnt = 1;
            }
        }
    }
    else{
        cnt=1;
    }
    if (cnt == 1)
    {
        cout << "Prime";
    }
    else
    {

        cout << num << " is not prime number :(";
    }
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    prime(a);
    return 0;
}