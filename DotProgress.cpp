#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i-1; j++)
        {
            cout<<" ";
        }
        cout<<"0"<<endl;
        Sleep(1000);
        
    }
    
    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            cout<<" ";
        }
        cout<<"0"<<endl;
        Sleep(1000);
        
    }
    return 0;
}