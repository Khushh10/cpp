#include<iostream>
using namespace std;

int main(){
    int temp,first=0,last=7,mid,num,arr[8]={4,5,8,10,14,20,70,95};
    cout<<"enter the number: ";
    cin>>num;
    mid=(first+last) / 2;
    
    while(first<=last)
    {
        mid=(first+last) / 2;
        if(num == arr[mid])
        {
            temp=mid;
            break;
        }
        else if(num<arr[mid]){
            last=mid-1;
        }
        else if(num>arr[mid]){
            first=mid+1;
        }
    }
    if(temp>-1 && temp<8)
    {
        cout<<"value found at: "<<temp;
    }
    else {
        cout<<"value not found";
    }
    return 0;
}