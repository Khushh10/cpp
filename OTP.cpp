#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    char a;
    int num=(rand()%6)+1;
    cout<<"The number on dice is: "<<num;

    return 0;
}