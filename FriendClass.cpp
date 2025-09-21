#include <iostream>
using namespace std;

class A
{
    int a = 10, b = 20;
    friend class B;
};

class B
{
public:
    void add(A r1)
    {
        cout << "Sum: " << r1.a + r1.b;
    }
};

int main()
{
    A a1;
    B b1;
    b1.add(a1);
    return 0;
}