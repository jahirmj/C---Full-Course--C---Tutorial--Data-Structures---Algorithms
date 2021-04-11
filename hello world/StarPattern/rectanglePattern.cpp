#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number you want to: ";
    cin >> n;
    //-----------> blow code is for printing upper tringles Stars.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //---------> blow code is for printing lower tringles Stars.
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}