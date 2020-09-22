#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        int in;
        vector<int> inp;

        while (cin >> in && in != 0)
        {
            inp.push_back(in);
        }
        int count = 0;
        for (int i = 0; i < inp.size(); i++)
        {
            if (inp[i] * 2 < inp[i + 1])
            {
                count += inp[i + 1] - inp[i] * 2;
            }
        }

        cout << count << endl;

        t--;
    }
}