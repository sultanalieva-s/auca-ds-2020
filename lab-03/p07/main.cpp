#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    cin.ignore();


    for(int i = 0; i < tests; i++)
    {
        string in;
        getline(cin,in);

        vector<string> inps;
        istringstream innn(in);
        string piece;
        while(innn>>piece)
        {
            inps.push_back(piece);
        }
        bool isLoop = true;

        for (int i = 0; i < inps.size(); i++)
        {
            if (i == inps.size() - 1)
            {
                if (inps[i].at(1) == inps[0].at(0))
                {
                    isLoop = false;
                }
            }
            else
            {
                if (inps[i].at(1) == inps[i + 1].at(0))
                {
                    isLoop = false;
                }
            }
        }

        cout << (isLoop ? "LOOP" : "NO LOOP") << endl;
    }

   
}