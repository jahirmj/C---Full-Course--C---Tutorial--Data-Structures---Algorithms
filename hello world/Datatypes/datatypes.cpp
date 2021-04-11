#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif

    int a;  //Declaration of Variable
    a = 12; //Initialisation of Variable
    cout << "Size of int is " << sizeof(a) << endl;

    float b;
    cout << "Size of float is " << sizeof(b) << endl;

    char c;
    cout << "Size of char is " << sizeof(c) << endl;

    bool d;
    cout << "Size of bool is " << sizeof(d) << endl;

    short int si;
    long int li;

    cout << "Size of short int is " << sizeof(si) << endl;

    cout << "Size of long int is " << sizeof(li) << endl;

    double dou;
    cout << "Size of double is " << sizeof(dou) << endl;

    return 0;
}