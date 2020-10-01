#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    cin >> n;
    double o = 0.5 + 1000.0 * (double(5280) / double(4854)) * n;
    cout << int(o) << endl;
}