#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;

    cin>>a>>b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int numa = stoi(a);
    int numb = stoi(b);

    int out = max(numa,numb);

    cout<<out<<endl;
}