#include <iostream>
using namespace std;

// int main()
// {
//     int array[4] = {10, 20, 50, 70};
//     cout << array[3] << endl;
//     return 0;
// }

int main()
{
    int n;
    cout << " Enter the size of the array: ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
