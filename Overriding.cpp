#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {   
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {  
        cout << "Dog says Woof " << endl;
    }
};

int main() {
    Animal a;   
    Dog d;

    a.sound();   
    d.sound();
    return 0;
}
