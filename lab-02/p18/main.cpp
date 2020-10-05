#include<iostream>
using namespace std;

int main()
{
    string t;
    getline(cin, t);

    int counta = 0;
    int countb = 0;

    for(int i = 1; i < t.size(); i+=2)
    {
        if (t[i - 1] == 'A')
        {
            counta++;
        }
        else
        {
            countb++;
        }
        
    }

    if( counta == 10 && countb == 10)
    {

    }
    else
    {
        
    }
    




}