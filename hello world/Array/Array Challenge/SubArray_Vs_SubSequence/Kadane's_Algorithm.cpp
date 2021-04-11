/*Maximum Subarray Sum

Using Kadane's_Algorithm*/

// Using O(n) algorithm to solve this problem----->

#include "bits/stdc++.h"

using namespace std;

int main()
{
    system("cls");
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << maxSum << endl;

    return 0;
}