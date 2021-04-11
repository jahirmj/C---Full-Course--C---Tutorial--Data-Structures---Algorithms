#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1; // Initialization
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int n;
    cin >> n;
    int ans = fact(n); // Function call
    cout << ans << endl;
    return 0;
}