#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    system("cls");
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int mat[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int r = 0, c = m - 1;
    bool found = false;
    while (r < n and c >= 0)
    {
        if (mat[r][c])
        {
            found = true;
        }
        if (mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
        cout << "Element found";

    else
    {
        cout << "Element does not exist";
    }

    return 0;
}