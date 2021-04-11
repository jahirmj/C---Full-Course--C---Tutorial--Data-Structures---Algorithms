#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n]; //User total koto value dibe seta store hobe.

    for (int i = 0; i < n; i++) //User eata te value gulo one one kore assign korbe.
    {
        cin >> arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > maxNo)
        // {
        //     maxNo = arr[i];
        // }
        // if (arr[i] < minNo)
        // {
        //     minNo = arr[i];
        // }

        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout << maxNo << " " << minNo << endl;

    return 0;
}