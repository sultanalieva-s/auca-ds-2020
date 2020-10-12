#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int in;
    vector<int> denominators = {100, 50, 10, 5, 1};
    vector<char> chars = {'i', 'v', 'x', 'l', 'c'};

    while (cin >> in && in != 0)
    {
        vector<int> romansCount(5, 0);
        int tempin = in;

        for (int k = 1; k <= in; k++)
        {
            int tempk = k;

            if (tempk == 4 || tempk %10 == 4)
            {
                romansCount[4]++;
                romansCount[3]++;
                tempk -= 4;
            }

            if (tempk == 9 || tempk % 10 == 9)
            {
                romansCount[4]++;
                romansCount[2]++;

                tempk -= 9;
            }
            if (tempk == 40 || tempk % 100 == 40 || (tempk - tempk%10) == 40)
            {
                romansCount[2]++;
                romansCount[1]++;
                tempk -= 40;
            }
            if (k == 90 || k % 100 == 90 || (tempk - tempk % 10) == 90)
            {
                romansCount[2]++;
                romansCount[0]++;
                tempk -= 90;
            }

            for (int i = 0; i < 5; i++)
            {
                int piece = tempk / denominators[i];
                romansCount[i] += piece;
                tempk = tempk % denominators[i];
            }
        }

        cout << tempin << ": ";
        
        for (int i = 4, j = 0; i >= 0; i--, j++)
        {
            if (i == 0)
            {
                cout << romansCount[i] << " " << chars[j] << endl;
            }
            else
            {
                cout << romansCount[i] << " " << chars[j] << ", ";
            }
        }
    }
}