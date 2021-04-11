
// Note:- This is the Maximum_Circular_Subarray.

#include "bits/stdc++.h"
#include <climits>
using namespace std;

int Kadane(int arr[], int n)
{

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
    return maxSum;
}

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

    int wrapSum;
    int nonwrapSum;

    nonwrapSum = Kadane(arr, n);
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + Kadane(arr, n);

    cout << max(wrapSum, nonwrapSum) << endl;
    return 0;
}
