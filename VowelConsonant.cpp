#include <iostream>
using namespace std;
int main()
{
    int vow = 0, cons = 0, real = 0;
    string word;
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; i <= word.length() - 1; i++)
    {
        if (int(toupper(word[i])) >= 65 && int(toupper(word[i])) <= 90)
        {
            real += 1;
        }
    }

    for (int i = 0; i <= word.length() - 1; i++)
    {
        for (int j = 0; j <= sizeof(vowel) - 1; j++)
        {
            if (word[i] == vowel[j])
            {
                vow += 1;
            }
        }
    }

    cout << "Vowels: " << vow << endl
         << "Consonants: " << real - vow;

    return 0;
}