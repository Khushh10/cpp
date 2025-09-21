#include <iostream>
using namespace std;

class ATM
{
public:
    ATM()
    {
        cout << "Cashier called" << endl;
    }
    ATM(int money)
    {
        cout << "Cashier collected " << money;
    }
};

int main()
{
    ATM b1;
    ATM b2(100000);
    return 0;
}