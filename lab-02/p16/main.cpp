#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n != 0)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << "Possible" << endl;
        }
        else if (a - b == c || b - a == c)
        {
            cout << "Possible" << endl;
        }
        else if (a * b == c)
        {
            cout << "Possible" << endl;
        }
        else if (double(a) / b == c || double(b) / a == c)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }

        n--;
    }
}