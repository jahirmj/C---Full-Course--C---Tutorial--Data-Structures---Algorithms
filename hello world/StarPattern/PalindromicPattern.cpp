#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number you want to: ";
    cin >> n;

    for (int i = 1; i <= n; i++) // for printing rows.
    {
        int j;                       //initialisation of j.
        for (j = 1; j <= n - i; j++) // for printing spacess.
        {
            cout << "  ";
        }
        int k = i;          //initialisation of k.
        for (; j <= n; j++) // for printing 5 to 1 in decreasing order.
        {
            cout << k-- << " ";
        }
        k = 2;                      //initialisation of value of k.
        for (; j <= n + i - 1; j++) // for printing 1 to 5 in increasing order.
        {
            cout << k++ << " ";
        }
        cout << endl;
    }

    return 0;
}