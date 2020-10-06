#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<long long> inps;
    for(int i = 0; i < t; i++)
    {
        long long in;
        cin>>in;
        inps.push_back(in);
    }
    long long min = inps[0];
    int index = 0;
    for(int i = 1; i< inps.size(); i++)
    {
        if(min > i)
        {
            min = inps[i];
            index = i;
        }
    }
    cout<<index<<endl;
}