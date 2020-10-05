#include<iostream>
using namespace std;
int main()
{
    int prev, comp;
    cin>>prev>>comp;
    int index;
    bool hasbeensnowed = false;

    for(int i = 0; i < prev; i++)
    {
        int in;
        cin>>in;

        if(in <= comp)
        {
            hasbeensnowed = true;
            index = i;
            break;
        }

    }

    if(hasbeensnowed)
    {
        cout << "It hadn't snowed this early in " << index << " years!\n";
    }
    else
    {
        cout << "It had never snowed this early!\n";
    }

}