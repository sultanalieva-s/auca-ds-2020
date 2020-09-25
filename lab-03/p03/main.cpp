#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> song = {"Happy", "birthday", "to", "you",
                           "Happy", "birthday", "to", "you",
                           "Happy", "birthday", "to", "Rujia",
                           "Happy", "birthday", "to", "you"};
    int n;
    cin >> n;
    vector<string> inps;
    while (n != 0)
    {
        string inp;
        cin >> inp;
        inps.push_back(inp);
        n--;
    }
    if (inps.size() <= 16)
    {
        for (int i = 0, j = 0; i < song.size(); i++, j++)
        {
            if (j == inps.size())
            {
                j = 0;
            }
            cout << inps[j] << ": " << song[i] << endl;
        }
    }
    else
    {
        int limit = inps.size() % 16 != 0 ? inps.size() / 16 + 1 : inps.size() / 16;
        for (int i = 0, j = 0, t = 0; t < 16 * limit; i++, j++, t++)
        {
            if (i == 16)
            {
                i = 0;
            }

            if (j == inps.size())
            {
                j = 0;
            }
            cout << inps[j] << ": " << song[i] << endl;
        }
    }
}