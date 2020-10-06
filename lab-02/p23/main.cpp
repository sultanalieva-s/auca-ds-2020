#include<iostream>
using namespace std;

int main()
{
    int n;

    while(cin>>n && n != -1)
    {
        int d = 0;
        int prevt = 0;
        for(int i =0; i < n; i++)
        {
            int s,t;
            cin>>s>>t;
            d += (t - prevt) * s;
            prevt = t;
        }
        cout<<d<<" miles"<<endl;
    }
}