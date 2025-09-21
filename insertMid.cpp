#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int item;
    cout << "Enter range of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos = n / 2;
    cout << "Enter element: ";
    cin >> item;
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = item;

    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
