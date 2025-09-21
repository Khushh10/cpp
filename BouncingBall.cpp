#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int p = 0, d = 1, w = 5;

    while (true)
    {
        for (int i = 0; i < p; i++)
            cout << " ";
        cout << "0" << endl;

        Sleep(500);

        p += d;

        if (p >= w)
            d = -1;
        if (p <= 0)
            d = 1;
    }

    return 0;
}