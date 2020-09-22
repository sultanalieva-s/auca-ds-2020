#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        long long p, r, f;

        cin >> p >> r >> f;
        int count = 0;

        while (p <= f)
        {
            count++;
            p *= r;
        }
        cout << count << endl;

        t--;
    }
}