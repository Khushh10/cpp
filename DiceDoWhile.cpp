#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    char c;
    srand(time(0));
    do
    {
        int num = (rand() % 6) + 1;
        cout << "Number is: " << num<<endl;
        cout<<"Do you want to continue? y/n: ";
        cin>>c;
    } while (c == 'y' || c == 'Y');

    return 0;
}