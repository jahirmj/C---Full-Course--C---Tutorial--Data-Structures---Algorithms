#include <iostream>
using namespace std;

int main()
{

    char button;
    cout << "Input a character: " << endl;
    cin >> button;

    // if (button == 'a')
    // {
    //     cout << "Hello" << endl;
    // }
    // else if (button == 'b')
    // {
    //     cout << "Salut" << endl;
    // }
    // else if (button == 'c')
    // {
    //     cout << "Hola" << endl;
    // }
    // else if (button == 'd')
    // {
    //     cout << "Ciao" << endl;
    // }
    // else
    // {
    //     cout << "I am still learing more." << endl;
    // }

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Salut" << endl;
        break;
    case 'c':
        cout << "Hola" << endl;
        break;
    case 'd':
        cout << "Ciao" << endl;
        break;

    default:

        cout << "I am still learing more!" << endl;
        break;
    }

    return 0;
}