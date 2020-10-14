#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    //progression: x + n*y = n;
    // n = -x / (y -1)

    if (x == 0 && y == 1)
    {
        cout << "ALL GOOD" << endl;
    }
    else if (y == 1)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        double n = double(-x) / (double)(y - 1);
        cout << fixed << setprecision(9) << n << endl;
    }
}
