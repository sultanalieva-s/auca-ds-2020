#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int min = -1;
    int index;
    for(int i = 0; i < t; i++)
    {
        int in;
        cin>>in;
        if(min == -1 || min > in)
        {
            min = in;
            index= i;
        }
    }
    cout<<index<<endl;
}