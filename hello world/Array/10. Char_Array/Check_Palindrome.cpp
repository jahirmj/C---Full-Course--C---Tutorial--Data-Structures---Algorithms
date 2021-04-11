#include "bits/stdc++.h"
using namespace std;

int main()
{
    system("cls");

    int n;
    cout << "Enter how many character in the Array + Press Space 1 Time + Enter your word: ";
    cin >> n;

    char arr[n + 1];
    cin >> arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout << "Word is a Palindrome: " << endl;
    }
    else
    {
        cout << "Word is not a Palindrome: " << endl;
    }

    return 0;
}