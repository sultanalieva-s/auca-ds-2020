#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string p;

    if (m > n)
    {
        p = m - n == 1 ? "piece" : "pieces";
        cout << "Dr. Chaz will have " << m - n << " " << p << " of chicken left over!" << endl;
    }
    else
    {
        p = n - m == 1 ? "piece" : "pieces";
        cout << "Dr. Chaz needs " << n - m << " more " << p << " of chicken!" << endl;
    }
}