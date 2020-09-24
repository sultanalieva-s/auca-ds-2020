#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, mcount, previous;
    cin >> t;
    vector<int> inps;
    while (t != 0)
    {
        int in;
        if (cin >> in)
        {
            inps.push_back(in);
            previous = in;
        }
        else
        {
            inps.push_back(++previous);
            cin.clear();
            cin.ignore(6, ' ');
        }
        t--;
    }
    bool iscorrect = true;
    for (int i = 0; i < inps.size(); i++)
    {
        if (i + 1 != inps[i])
        {
            iscorrect = false;
        }
    }
    if (iscorrect)
    {
        cout << "makes sense" << endl;
    }
    else
    {
        cout << "something is fishy" << endl;
    }
}