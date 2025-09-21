#include <iostream>
using namespace std;
int main()
{
    int amt;
    string loc = " ";
    cout << "Enter location: ";
    cin >> loc;
    cout << "Enter the bill amount: ";
    cin >> amt;
    if (loc == "Sitapura" || loc == "Jagatpura")
    {
        if (amt >= 600)
        {
            amt = amt / 2;
            cout << "The amount payable after discount is " << amt;
        }
        else
            cout << "You are not eligible for the offer, so the total amount is " << amt;
    }
    else
    {
        cout << "The 50% off offer isn't currently available in this outlet so the total amount is " << amt;
    }

    return 0;
}