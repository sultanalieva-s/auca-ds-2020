#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, mcount, previous;
    vector<int> inps;

    cin >> t;

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

    string o = iscorrect ? "makes sense" : "something is fishy";
    cout<<o<<endl;
}