#include <iostream>
#include <algorithm>
using namespace std;

int Partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l, j = h;

    while (i < j)
    {
        do
        {
            i++;
        } while (i <= h && arr[i] <= pivot);

        do
        {
            j--;
        } while (j >= l && arr[j] > pivot);

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[l], arr[j]);
    return j;
}

void Quicksort(int arr[], int l, int h)
{
    if (l < h)
    {
        int q = Partition(arr, l, h);
        Quicksort(arr, l, q);
        Quicksort(arr, q + 1, h);
    }
}

int main()
{
    int arr[12] = {50, 10, 20, 60, 80, 100, 45, 70, 105, 30, 90, 40};
    int n = 12;

    Quicksort(arr, 0, n - 1);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
