#include <iostream>

using namespace std;

int main()
{

    int mb, months;
    cin >> mb >> months;
    int spent = 0;
    int t = 0;
    while (t < months)
    {
        int in = 0;
        cin >> in;
        spent += in;
        t++;
    }
    int res = mb * months - spent + 10;
    cout << res << endl;
}