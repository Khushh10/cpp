#include <iostream>
using namespace std;

class Sum
{
    int name;
    void displayName(){
        cout<<"Name is ";
    }
};

int main()
{
    int n=0;
    cout << "Enter no of values: ";
    cin >> n;
    Sum s1[n];
    return 0;
}