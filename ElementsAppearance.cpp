#include <iostream>
using namespace std;

int main()
{
    int A[8] = {1, 2, 2, 3, 1, 4, 2, 1};
    int n = 8;
    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[i] == A[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
        }
    }

    cout << "The element that appear most are: ";
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[i] == A[j])
            {
                count++;
            }
        }

        if (count == maxCount)
        {
            bool alrPrinted = false;
            for (int k = 0; k < i; k++)
            {
                if (A[k] == A[i])
                {
                    alrPrinted = true;
                    break;
                }
            }
            if (!alrPrinted)
            {
                cout << A[i] << " ";
            }
        }
    }

    cout << endl;
    return 0;
}
