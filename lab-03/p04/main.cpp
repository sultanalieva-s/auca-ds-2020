#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string in;
    cin>>in;

    int t;
    cin>>t;
    while(t!=0)
    {
        int a,b;
        cin>>a>>b;
        bool issame = true;
        for(int i = min(a, b)+1; i < max(a,b); i++)
        {
            if(in[i]!= in[i-1])
            {
                issame = false;
            }
        }
        if(issame)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
        t--;
    }

}