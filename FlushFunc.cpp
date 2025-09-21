#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    string str = "Welcome to JECRC";

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << flush;
        Sleep(500);
    }

    return 0;
}
