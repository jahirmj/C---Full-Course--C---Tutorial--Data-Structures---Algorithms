#include <iostream>
using namespace std;

int main()
{

    // int i = 1;
    // //1  +  //3 = 4
    // i = i++ + ++i;

    // cout << i << endl;

    // int i = 1;
    // int j = 2;
    // int k;

    // //1  //2   //1    //2    //3    //4  = 13
    // k = i + j + i++ + j++ + ++i + ++j;

    // cout << i << " " << j << " "
    //      << " " << k << endl;

    // int i = 0;

    // //0     //0     //1  //1
    // i = i++ - --i + ++i - i--;

    // cout << i << endl;

    // int i = 1, j = 2, k = 3;

    // //-- //1    //2      //3  = -4
    // int m = i-- - j-- - k--;

    // cout << i << endl;//0
    // cout << j << endl;//1
    // cout << k << endl;//2
    // cout << m << endl;//-4

    int i = 10, j = 20, k;

    // --//10  //9   //19  //20   //9  //20  //10  //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout << i << endl; //10
    cout << j << endl; //20
    cout << k << endl; //-20
    return 0;
}