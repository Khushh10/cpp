#include <iostream>
using namespace std;
int main()
{
    int amt;
    char loc;
    cout << "Enter branch " << endl
         << "Enter S for Sitapura, Enter J for Jagatpura, Enter R for Rampura" << endl;
    cin >> loc;
    cout << "Enter amount: ";
    cin >> amt;
    if (amt >= 600)
    {
        switch (loc)
        {
        case 'S':
            cout << "Your total payable amount is: " << amt / 2;
            break;
        case 'J':
            cout << "Your total payable amount is: " << amt / 2;
            break;
        case 'R':
            cout << "Sorry the offer isn't available in this location, total amount: " << amt;
            break;
        default:
            cout << "Enter valid location!";
        }
    }
    else
    {
        cout << "Total payable amount is: " << amt;
    }
    return 0;
}