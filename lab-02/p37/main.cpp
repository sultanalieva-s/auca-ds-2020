#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> arr;
    while (n != 0)
    {
        string in;
        getline(cin, in);
        arr.push_back(in);
        n--;
    }
    vector<string> tosort = arr;
    sort(tosort.begin(), tosort.end());

    if (tosort == arr)
    {
        cout << "INCREASING" << endl;
    }
    else
    {
        sort(tosort.begin(), tosort.end(), greater<string>());

        if (tosort == arr)
        {
            cout << "DECREASING" << endl;
        }
        else
        {
            cout << "NEITHER" << endl;
        }
    }
}