#include <iostream>
using namespace std;

int main()
{
    int a1, a2, b1, b2;
    while (cin >> a1 >> a2 >> b1 >> b2 && a1 != 0 && a2 != 0 && b1 != 0 && b2 != 0)
    {
        bool isTie = false;
        bool isFirst = false;
        if (a1 + a2 == 3 || b1 + b2 == 3)
        {
            if (a1 + a2 == b1 + b2)
            {
                isTie = true;
            }
            else if (a1 + a2 == 3)
            {
                isFirst = true;
            }
        }
        else if (a1 == a2 || b1 == b2)
        {
            if (a1==b1 && a2 == b2)
            {
                isTie = true;
            }
            else if (a1 == a2)
            {
                isFirst = true;
            }
        }
        else
        {
            if (a1 < a2)
            {
                swap(a1, a2);
            }
            if (b1 < b2)
            {
                swap(b1, b2);
            }

            int a = 10 * a1 + a2;
            int b = 10 * b1 + b2;

            if (a == b)
            {
                isTie = true;
            }

            if (a > b)
            {
                isFirst = true;
            }
        }

        if (isFirst)
        {
            cout << "Player 1 wins." << endl;
        }
        else if (isTie)
        {
            cout << "Tie." << endl;
        }
        else
        {
            cout << "Player 2 wins." << endl;
        }
    }
}