// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t != 0)
    {
        int g, m;
        vector<int> gms;
        vector<int> mms;
        cin >> g >> m;

        while (g != 0)
        {
            int in;
            cin >> in;
            gms.push_back(in);
            g--;
        }
        while (m != 0)
        {
            int in;
            cin >> in;
            mms.push_back(in);

            m--;
        }

        int ming = gms[0];
        int minm = mms[0];
        int sizegms = gms.size();
        int sizemms = mms.size();
        while (sizegms != 0 || sizemms != 0)
        {
            for (int i : gms)
            {
                ming = ming > i ? i : ming;
            }
            for (int i : mms)
            {
                minm = minm > i ? i : minm;
            }

            if (ming != minm)
            {
                if (ming > minm)
                {
                    sizemms--;
                    // auto it = find(mms.begin(), mms.end(), minm);
                    // if (it != mms.end())
                    // {
                    //     mms.erase(it);
                    // }
                    // else
                    // {
                    //     mms.clear();
                    // }
                    
                    // mms.erase(find(mms.begin(), mms.end(), minm));
                }
                else
                {
                    sizegms--;

                    // auto it = find(gms.begin(), gms.end(), ming);
                    // if (it != gms.end())
                    // {
                    //     gms.erase(it);
                    // }
                    // else
                    // {
                    //     gms.clear();
                    // }
                    
                    // gms.erase(find(gms.begin(), gms.end(), ming));
                }
            }
            else
            {
                sizegms--;

                // auto it = find(mms.begin(), mms.end(), ming);
                // if (it != mms.end())
                // {
                //     mms.erase(it);
                // }
                // else
                // {
                //     mms.clear();
                // }
                
                // mms.erase(find(mms.begin(), mms.end(), minm));
            }
        }

        if (sizegms == 0)
        {
            cout << "M" << endl;
        }
        else if (sizemms == 0)
        {
            cout << "G" << endl;
        }
        else
        {
            cout << "undef" << endl;
        }

        t--;
    }
}