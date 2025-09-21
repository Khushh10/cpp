#include <iostream>
using namespace std;

int temp, first = 0, last = 6;
int arr[7] = {10, 20, 30, 35, 40, 60,65};
int binary(int a, int first, int last)
{
    int mid;
    mid = (first + last) / 2;
    if (first > last)
    {
        return -1;
    }
    else if (a == arr[mid])
    {
        temp = mid;
        return temp;
    }
    else if (a < arr[mid])
    {
        return binary(a, first, mid - 1);
    }
    else if (a > arr[mid])
    {
        return binary(a, mid + 1, last);
    }
    return -1;
}
int main()
{
    int num, cnt;
    cout << "Enter Your Number: ";
    cin >> num;
    cnt = binary(num, 0, 6);
    if (cnt != -1)
    {
        cout << "Value found at: " << cnt;
    }
    else
    {
        cout << "Value not found";
    }
    return 0;
}