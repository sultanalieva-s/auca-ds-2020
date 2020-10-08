#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a>b)
    {
        swap(a,b);
    }

    if(b > c)
    {
        swap(b, c);
    }

    if(a > b)
    {
        swap(a,b);
    }

    if(b-a == c-b)
    {
        cout<<c+c-b<<endl;
    }
    else if(b - a < c - b)
    {
        cout << c - (b-a) << endl;
    }
}