#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number you want to: ";
    cin >> n;

    for (int i = 1; i <= n; i++) //This for loop is for printing the row numbers.
    {
        for (int j = 1; j <= n - i; j++) //This for loop is printing the spacess of the individual row numbers.
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) //This for loop is printing the numbers between the beginning and ending of spacess.
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}