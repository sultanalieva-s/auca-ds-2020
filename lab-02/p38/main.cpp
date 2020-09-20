#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> order (n, 1);
    for(int i = 0; i < n-1; i++)
    {
        int t;
        cin>>t;
        order[t+1] = i+2;
    }
    for(int i:order)
    {
        if(i==order[order.size()-1])
        {
            cout << i << endl;
        }
        else
        {
            cout << i << " ";
        }
    }
}