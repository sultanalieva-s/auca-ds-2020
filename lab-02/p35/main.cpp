#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (b < a)
    {
        swap(a, b);
    }

    if (c < b)
    {
        swap(c, b);
    }

    if (b - a != c - b)
    {
        int step = min(b - a, c - b);
        cout << c - step << endl;
    }
    else
    {
        cout << c + (c - b) << endl;
    }
}