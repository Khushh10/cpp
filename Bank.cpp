#include <iostream>
using namespace std;
class bank
{
private:
    int initBal = 1000000, wAmt, dAmt;

public:
    void withdraw()
    {
        cout << "Enter amount to withdraw: ";
        cin >> wAmt;
        if (wAmt < initBal)
        {
            initBal -= wAmt;
            cout << wAmt << " withdrawn from your account.";
        }
        else
        {
            cout << "Insufficient Balance.";
        }
    }

    void deposit()
    {
        cout << "Enter amount to deposit: ";
        cin >> dAmt;
        initBal += dAmt;
        cout << "Amount Deposited!";
    }

    void balance()
    {
        cout << "Your current balance is: " << initBal;
    }
};                                                                   

int main()
{
    int ch;
    char mChoice = 'y';
    bank c1;
    while (mChoice == 'Y' || mChoice == 'y')
    {
        cout << "\nEnter choice: \n1. Withdraw \n2. Deposit \n3. Check Balance: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            c1.withdraw();
            break;

        case 2:
            c1.deposit();
            break;

        case 3:
            c1.balance();
            break;

        default:
            cout << "\nPlease enter valid choice :)";
            break;
        }

        cout << "\nDo you want to continue? y/n: ";
        cin >> mChoice;
    }
    return 0;
}