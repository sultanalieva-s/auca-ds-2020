#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        int c;
        cin >> c;
        cin.ignore();
        int inps[c];

        for (int i = 0; i < c; i++)
        {
            int in;
            cin >> in;
            inps[i] = in;
        }

        int index;
        for (int i = 0; i < c; i++)
        {
            if (inps[i] != inps[i] - 1)
            {
                index = i + 1;
            }
        }

        cout << index << endl;

        t--;
    }
}