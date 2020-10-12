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
        sort(gms.begin(), gms.end());
        sort(mms.begin(), mms.end());
        bool isGLost = false;

        if (gms.size() == 1 || mms.size() == 1)
        {
            if (gms.size() == mms.size())
            {
                if (gms[0] == mms[0] || gms[0] > mms[0])
                {
                    cout << "Godzilla" << endl;
                }
                else
                {
                    cout << "MechaGodzilla" << endl;
                }
            }
            else if (gms.size() == 1)
            {
                int compare = gms[0];
                int i = 0;
                while (i < mms.size())
                {
                    if (compare < mms[i])
                    {
                        isGLost = true;
                        break;
                    }
                    i++;
                }

                if (isGLost)
                {
                    cout << "MechaGodzilla" << endl;
                }
                else
                {
                    cout << "Godzilla" << endl;
                }
            }
            else
            {
                if (mms[0] >= gms[0])
                {
                    cout << "MechaGodzilla" << endl;
                }
                else
                {
                    cout << "Godzilla" << endl;
                }
            }
        }
        else
        {
            int gi = 0;
            int mi = 0;
            int gmin = gms[0];
            int mmin = mms[0];

            bool isGLost = false;

            while (true)
            {

                if (gi == gms.size() - 1)
                {
                    isGLost = true;
                    break;
                }
                if (mi == mms.size() - 1)
                {
                    isGLost = false;
                    break;
                }

                if (gmin == mmin)
                {
                    mmin = mms[++mi];
                }
                else if (gmin < mmin)
                {
                    gmin = gms[++gi];
                }
                else if (mmin < gmin)
                {
                    mmin = mms[++mi];
                }
            }
            if (isGLost)
            {
                cout << "MechaGodzilla" << endl;
            }
            else
            {
                cout << "Godzilla" << endl;
            }
        }

        t--;
    }
}