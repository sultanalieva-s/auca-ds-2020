#include <iostream>
#include <string>
using namespace std;

int sumOfDigits(int num)
{
    int d = 0;
    while (num != 0)
    {
        d++;
        num /= 10;
    }
    return d;
}

int main()
{
    string in;

    while (cin >> in && in != "END")
    {
        int inp = stoi(in);
        int i = 0;

        while (sumOfDigits(sumOfDigits(inp)) != sumOfDigits(inp))
        {
            i++;
            inp = sumOfDigits(inp);
        }
        cout << i + 2 << endl;
    }
}