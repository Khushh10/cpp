#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    srand(time(0));
    char inp;
    int finish = 50;
    cout << "Do you want to start race? y/n: ";
    cin >> inp;
    while (inp == 'Y' || inp == 'y')
    {
        int p1 = 0, p2 = 0;

        while (p1 < finish && p2 < finish)
        {
            system("CLS");

            p1 += (rand() % 5) + 1;
            p2 += (rand() % 5) + 1;

            for (int i = 0; i < p1; i++)
                cout << ".";
            cout << "C1" << endl;

            for (int i = 0; i < p2; i++)
                cout << ".";
            cout << "C2" << endl;
            Sleep(200);
        }

        cout << endl;
        if (p1 >= finish && p2 >= finish)
            cout << "It's a tie!" << endl;
        else if (p1 >= finish)
            cout << "C1 Wins!" << endl;
        else
            cout << "C2 Wins!" << endl;

        cout << "Do you want to race again? y/n: ";
        cin >> inp;
    }
    cout<<"Ending race...";

    return 0;
}
