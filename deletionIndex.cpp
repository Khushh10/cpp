#include <iostream>
using namespace std;

int main()
{
    int MAX = 10;
    int A[MAX] = {5, 10, 15, 20, 25, 30};
    int n = 6;
    int item, LB, UB, i;

    if (n == 0)
    {
        cout << "underflow!!";
        return 0;
    }

    cout << "Enter value to delete: ";
    cin >> item;

    LB = 0;0
    UB = n - 1;
    int index = -1;

    for (LB = 0; LB <= UB; LB++)
    {
        if (A[LB] == item)
        {
            index = LB;
            break;
        }
    }

    if (index == -1)
    {
        cout << "not found!";
        return 0;
    }

    for (i = index; i < n - 1; i++)
    {
        A[i] = A[i + 1];
    }
    n--;

    cout << "Deleted: " << item << endl;

    cout << "Array after deletion: ";
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
