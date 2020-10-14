#include <iostream>
#include <algorithm>
#include "utils.h"

using namespace std;
//pointers
void goodswap(int *addresssone, int *addressstwo)
{
    int t = *addresssone;

    *addresssone = *addressstwo;
    *addressstwo = t;
}
//referenses
void goodswap2(int &aref, int &bref)
{
    int t = aref;
    aref = bref;
    bref = t;
}

void badSwap(int a, int b ){
    int t = a;
    a = b;
    b = t;
}

int main()
{
    cout << "1st int: " << endl;
    int a;
    cin >> a;

    cout << "2nd int: " << endl;
    int b;
    cin >> b;

    cout << "std swap" << endl;
    cout << "before swap: a = "<<a<<" b = "<<b << endl;
    swap(a, b);
    cout << "after swap: a = " << a << " b = " << b << endl;

    cout << "bad swap (pass by value)" << endl;
    cout << "before swap: a = " << a << " b = " << b << endl;
    badSwap(a, b);
    cout << "after swap: a = " << a << " b = " << b << endl;

    cout << "good swap (pass by value)" << endl;
    cout << "before swap: a = " << a << " b = " << b << endl;
    goodswap(&a, &b);
    cout << "after swap: a = " << a << " b = " << b << endl;

    cout << "good swap (pass by ref)" << endl;
    cout << "before swap: a = " << a << " b = " << b << endl;
    goodswap2(a, b);
    cout << "after swap: a = " << a << " b = " << b << endl;

    cout << "good swap (pass by ref with any type)" << endl;
    cout << "before swap: a = " << a << " b = " << b << endl;
    auswap(a, b);
    cout << "after swap: a = " << a << " b = " << b << endl;

}