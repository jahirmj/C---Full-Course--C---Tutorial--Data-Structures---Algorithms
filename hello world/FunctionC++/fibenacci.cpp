#include <iostream>
using namespace std;

void fib(int a)
{

    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 1; i <= a; i++)
    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;

    fib(a);

    return 0;
}