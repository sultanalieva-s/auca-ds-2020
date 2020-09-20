#include <iostream>

#include <algorithm>

using namespace std;

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

    swap(a, b);
    badSwap(a, b);

    cout << "After swap: a = " << a << " b = " << b << endl;
}