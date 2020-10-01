#include<iostream>
using namespace std;
int main()
{
    int g,s,c;
    cin>>g>>s>>c;
    int cost = g*3 + s*2 + c*1;
    string t = "";
    if(cost>=8)
    {
        t = "Province or Gold";
    }
    else if(cost >= 6)
    {
        t = "Duchy or Gold";
    }
    else if(cost >= 5)
    {
        t = "Duchy or Silver";
    }
    else if(cost >= 3)
    {
        t = "Estate or Silver";
    }
    else if(cost==2)
    {
        t = "Estate or Copper";
    }
    else
    {
        t = "Copper";
    }

    if(!t.empty())
    {
        cout<<t<<endl;
    }
    
}