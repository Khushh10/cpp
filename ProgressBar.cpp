#include<iostream>
#include<Windows.h>
using namespace std;

int main(){
    int temp=0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"|";
        }
        temp=temp+20;
        cout<<temp<<"%"<<endl;
        Sleep(1000);
    }
    
    return 0;
}