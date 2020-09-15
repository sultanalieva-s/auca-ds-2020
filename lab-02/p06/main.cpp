// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double output = 0;

    while (n != 0)
    {
        double q, y;
        cin >> q >> y;
        output += q * y;
        n--;
    }
    cout << setprecision(3) << fixed << output << endl;
}