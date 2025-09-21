#include <iostream>
using namespace std;
class Sum
{
private:
    int b;

public:
    int a;
    void show()
    {
        cout << "Hello";
    }
};

int main()
{
    Sum s1;
    s1.a=2;
    cout<<s1.a<<endl;
    s1.show();
}