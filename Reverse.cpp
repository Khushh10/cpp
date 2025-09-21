#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string a,b;
    a = "123";
    reverse(a.begin(),a.end());
    cout<<a;
    return 0;
}