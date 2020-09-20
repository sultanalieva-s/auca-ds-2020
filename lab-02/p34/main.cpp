#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    char c;
    string a;

    vector<bool> isRight(26, false);
    vector<int> attempts(26, 0);

    int time = 0;
    int rightsum = 0;

    while (true)
    {
        cin >> n;
        
        if (n == -1)
        {
            break;
        }

        cin >> c >> a;

        if (a == "right")
        {
            time += n;
            rightsum++;
            isRight[c - 'A'] = true;
        }

        else
        {
            attempts[c - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (isRight[i])
        {
            time += 20 * attempts[i];
        }
    }

    cout << rightsum << " " <<  time << endl;
}