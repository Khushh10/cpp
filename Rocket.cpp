#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    system("Pause");
    cout << "Rocket launch in...." << endl;
    for (int i = 5; i > 0; i--)
    {
        cout << i << endl;
        Sleep(1000);
    }

    cout << "Boom! Rocket Launched";

    return 0;
}
