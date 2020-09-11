#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int articles, impactFactor;
    cin >> articles >> impactFactor;

    //factor = total of citations / articles
    // citations = articles * factor

    int scientists = ceil(articles *  (double)(impactFactor - 0.99));


    cout << scientists << endl;
}