#include <iostream>
using namespace std;
class Book
{
public:
    string name;
    int price;
};

int main()
{
    Book b[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name of book: ";
        cin >> b[i].name;
        cout << "Enter price of book: ";
        cin >> b[i].price;
    }

    if (b[0].price >= b[1].price)
    {
        if (b[0].price >= b[2].price)
            cout << "Book with highest price is: " << b[0].name;
        else
            cout << "Book with highest price is: " << b[2].name;
    }
    else
    {
        if (b[1].price >= b[2].price)
            cout << "Book with highest price is: " << b[1].name;
        else
            cout << "Book with highest price is: " << b[2].name;
    }

    return 0;
}