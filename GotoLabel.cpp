#include <iostream>
using namespace std;

int main()
{
    int n;
    string pass = "khush04", inp;
    cout << "Enter password: ";
    cin >> inp;
    if (pass == inp)
        goto correct;

    else
        goto invalid;

correct:
    cout << "Correct password!";
    return 0;

invalid:
    cout << "Incorrect password!";
    return 0;
}