#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif

    int a, b, c;

    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "The maximum value is " << a << endl;
        }
        else
        {
            cout << "The maximum value is " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The maximum value is " << b << endl;
        }
        else
        {
            cout << "The maximum value is " << c << endl;
        }
    }

    return 0;
}