#include <iostream>
using namespace std;

int temp;
int arr[6] = {20, 30, 50, 60, 70, 80};
int linearsearch(int a, int i = 0)
{
    if (i == 6)
    {
        return -1;
    }
    else if (a == arr[i])
    {
        temp = i;
        return temp;
    }
    else
    {
        return linearsearch(a, i + 1);
    }
}
int main()
{
    int num, result;
    cout << "Enter Your Number: ";
    cin >> num;
    result = linearsearch(num);
    if (result != -1)
    {
        cout << "Number found at: " << result;
    }
    else
    {
        cout << "Number not found";
    }
    return 0;
}