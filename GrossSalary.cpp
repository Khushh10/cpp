#include <iostream>
using namespace std;

int main() {
    float bs, hra, da, ca, pf, gross;

    cout << "Enter Basic Salary: ";
    cin >> bs;

    hra = 0.12 * bs;
    da  = 0.12 * bs;
    ca  = 0.07 * bs;
    pf  = 0.12 * bs;

    gross = bs + hra + da + ca - pf;

    cout << "Gross Salary = " << gross << endl;

    return 0;
} 
