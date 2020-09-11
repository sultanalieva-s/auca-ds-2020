#include <iostream>
using namespace std;

int main()
{
    int articles, impactFactor;
    cin >> articles >> impactFactor;

    //factor = total of citations / articles
    // citations = articles * factor
    int scientists = articles * impactFactor;

    cout << scientists << endl;
}