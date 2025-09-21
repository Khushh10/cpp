#include <iostream>
using namespace std;

int main()
{
    int temp, num, arr[6] = {20, 30, 50, 60, 80};
    cout << "Enter number to search: ";
    cin >> num;
    for (int i = 0; i < 6; i++)
    {
        if (num == arr[i])
        {
            temp = arr[i];
            cout<<"Value found at position "<<i+1;
            break;
        }
        else{
            temp=0;
        }
    }
    if (temp==0)
    {
        cout<<"Value not found. ";
    }
    
}