#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n;
    cin>>n;
    double o = 1000 * (double(5280)/4854) * n;
    cout<<ceil(o)<<endl;
}