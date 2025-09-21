#include <iostream>
using namespace std;

int main()
{
    int A[100], n;
    int item;
    cout << "Enter range of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int pos = n / 2;
    n = n - 1;

    for (int i = pos; i < n; i++)
    {
        A[i] = A[i + 1];
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
