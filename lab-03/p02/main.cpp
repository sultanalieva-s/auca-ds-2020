#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        int c, p = 0;
        cin >> c;
        cin.ignore();
        vector<string> inps;
        for (int i = 0; i < c; i++)
        {
            string in;
            getline(cin, in);
            if (in == "LEFT" || in == "RIGHT")
            {
                inps.push_back(in);
            }
            else
            {
                int i = stoi(in.substr(7)) - 1;
                inps.push_back(inps[i]);
            }
           
        }
        for (int i = 0; i < inps.size(); i++)
        {
            if (inps[i] == "RIGHT")
            {
                p++;
            }
            else if (inps[i] == "LEFT")
            {
                p--;
            }
        }
        cout<<p<<endl;

        t--;
    }
}
