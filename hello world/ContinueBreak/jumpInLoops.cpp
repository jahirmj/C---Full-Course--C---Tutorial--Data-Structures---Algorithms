#include <iostream>
using namespace std;

int main()
{

    int poketMoney = 3000;
    for (int date = 1; date <= 30; date++)
    {

        if (date % 2 == 0)
        {
            continue;
        }

        if (poketMoney == 0)
        {
            break;
        }

        cout << "Go out today!" << endl;
        poketMoney = poketMoney - 3000;
    }

    return 0;
}