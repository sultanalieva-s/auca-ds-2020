#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;


    if(l == 0 && r == 0)
    {
        cout << "Not a moose" << endl;
    }
    else if (l == r)
    {
        cout << "Even " << l + r << endl;
    }
    else
    {
        int m = max(l, r);
        cout << "Odd " << m + m << endl;
    }
}