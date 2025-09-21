#include <iostream>
using namespace std;
int main()
{
    int n = 6, temp;
    int arr[6] = {70, 40, 30, 50, 10, 43};
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j <= (n - 1) - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}