#include <iostream>
using namespace std;

int linerSearch(int arr[], int n, int key)
{
    //Time complixcity of this loop is O(n)
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int n;
    cout << "Enter how many numbers you want to add the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers in this array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter The Key you want to find: ";
    cin >> key;

    cout << "The Number has the position no. " << linerSearch(arr, n, key) << endl;
    return 0;
}