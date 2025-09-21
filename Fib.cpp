#include <iostream>
using namespace std;
int main()
{
    int a, r, res[2] = {0, 1};
    cout << "Enter the range: ";
    cin >> r;
    for (int i = 0; i < r; i++)
    {
        cout << res[0] << endl;
        a = res[0] + res[1];
        res[0] = res[1];
        res[1] = a;
    }
    return 0;
}