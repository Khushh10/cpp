#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "You entered: " << a << endl;
    }
};

int main()
{
    A a1;
    a1.setData(10);
    a1.getData();
    return 0;
}