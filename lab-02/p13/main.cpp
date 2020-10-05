#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    //progression: x + n*y = n;
    // n = -x / (y -1)
    double n = double(-x) / (double)(y - 1);
    if (n - int(n) == 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << fixed << setprecision(9) << n << endl;
    }
}
