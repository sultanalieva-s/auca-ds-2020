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

        if(inps.size() == 1)
        {
            cout<<"NO LOOP"<<endl;
            continue;
        }
        int countF = 0;
        int countM = 0;

        for(int i =0; i <inps.size(); i++ )
        {
            for(int j = 0; j < inps[i].size(); j++)
            {
                if(inps[i].at(j) == 'F')
                {
                    countF++;
                }

                if(inps[i].at(j) == 'M')
                {
                    countM++;
                }
            }
        }

        if(countM == countF)
        {
            cout<<"LOOP"<<endl;
        }
        else
        {
            cout<<"NO LOOP"<<endl;
        }
    }
}