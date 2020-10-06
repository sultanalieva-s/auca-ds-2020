#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int min = INT8_MAX;
    int index;
    for(int i = 0; i < t; i++)
    {
        int in;
        cin>>in;
        if(in < min)
        {
            min = in;
            index= i;
        }
    }
    cout<<index<<endl;
}