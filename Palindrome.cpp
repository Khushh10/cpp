#include <iostream>
using namespace std;
// int main()
// {
//     string lmao, oaml;
//     int j;
//     cout << "Enter the string: ";
//     cin >> lmao;
//     for (int i = lmao.length()-1; i >=0; i--)
//     {
//         oaml+=lmao[i];
//     }
//     cout<<lmao<<" = "<<oaml<<endl;
    
//     if(lmao==oaml){
//         cout<<"Yes, its a palindrome";
//     }
//     else{
//         cout<<"No, not a palindrome";
//     }
//     return 0;
// }

int main(){
    int left=0,right;
    string word;
    bool isPal=true;
    cout<<"Enter the string: ";
    cin>>word; 
    right=word.length()-1;

    while(left<right){
        if(word[left] != word[right]){
            isPal=false;
            break;
        }
        else{
            left++;
            right--;
        }
    }

    if(isPal){
        cout<<word<<" is palindrome";
    }
    else{
        cout<<word<<" is not a palindrome";
    }

}