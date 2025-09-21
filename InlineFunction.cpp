#include <iostream>
using namespace std;

class Cafe
{
public:
    inline void orderPizza(string type)
    {
        cout << "Pizza ordered: " << type << endl;
    }

    inline void orderBurger(string name);
};

inline void Cafe::orderBurger(string name)
{
    cout << "Burger served: " << name << endl;
}

int main()
{
    string pizza, burger;
    Cafe c1;
    cout << "Enter the type of Pizza to order: ";
    cin >> pizza;
    c1.orderPizza(pizza);
    cout << "Enter the type of Burger to order: ";
    cin >> burger;
    c1.orderBurger(burger);

    return 0;
}
