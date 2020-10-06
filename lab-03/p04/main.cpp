#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string in;
    while (cin >> in && in.find(' ') != string::npos)

    {
        int t;
        cin >> t;
        int casse = 1;
        while (t != 0)
        {
            int a, b;
            cin >> a >> b;
            bool issame = true;
            for (int i = min(a, b) + 1; i <= max(a, b); i++)
            {
                if (in[i] != in[i - 1])
                {
                    issame = false;
                    break;
                }
            }
            cout << "Case " << casse << ":" << endl;
            if (issame)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            casse++;
            t--;
        }
    }
}