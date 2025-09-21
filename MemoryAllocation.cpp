#include <iostream>
using namespace std;
class number
{
public:
    int num;
    void show()
    {
        cout << "You entered: " << num << endl;
    }
};

int main()
{
    number n1, n2, n3;
    n1.num = 2;
    n1.show();
    n2.num = 3;
    n2.show();
    n3.num = 4;
    n3.show();
    return 0;
}