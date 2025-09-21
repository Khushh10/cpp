#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

class Rainfall
{
public:
    void fall(int num)
    {
        for (int i = 0; i < num; i += 15)
        {
            cout
                << "/   /   /   /   / \n";
            Sleep(500);
        }
    }

    void rain()
    {
        int rain;
        rain = rand() % 100;
        if (rain < 20)
        {
            cout << " O \n";
            cout << "Sunny Day: "
                 << rain << "%";
        }
        else if (rain < 60)
        {
            fall(rain);
            cout << "Moderate Rain: "
                 << rain << "%";
        }
        else
        {
            fall(rain);
            cout << "Heavy Rainfall: "
                 << rain << "%";
        }
    }
};

int main()
{
    srand(time(0));
    Rainfall r1;
    while (true)
    {
        cout << endl;
        r1.rain();
    }
    return 0;
}