#include <iostream>
using namespace std;

int sumOfDigits(int num);

int main()
{
    int inp;
    while (cin >> inp && inp != 0)
    {
        if (inp == 0)
            break;

        int sumOfInp = sumOfDigits(inp);
        int startNum = 11;

        while (true)
        {
            int production = startNum * inp;
            int sumOfProd = sumOfDigits(production);

            if (sumOfInp == sumOfProd)
            {
                cout << startNum << endl;
                break;
            }
            else
            {
                startNum++;
            }
        }
    }

    return 0;
}

int sumOfDigits(int num)
{
    int sum = 0;
    int t = num;
    while (t > 0)
    {
        sum += t % 10;
        t /= 10;
    }
    return sum;
}
