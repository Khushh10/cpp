#include <iostream>
using namespace std;

int main()
{
    int A[6] = {1, 3, 4, 2, 2, 5};
    int n = 6;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                cout << "Repeating element: " << A[i] << endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
    {
        cout << "No repeating element found." << endl;
    }

    return 0;
}
