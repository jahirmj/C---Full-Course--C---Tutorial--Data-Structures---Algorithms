#include "bits/stdc++.h"
using namespace std;

int main()
{
    system("cls");

    // Declare Section--->
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    // Input Section---->
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output Section-->
    cout << "Metrix is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Searching Section-->

    int x;
    cin >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << endl;
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "Element is found\n";
    }
    else
    {
        cout << "Element is not found\n";
    }

    return 0;
}