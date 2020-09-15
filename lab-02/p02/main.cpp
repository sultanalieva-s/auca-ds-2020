#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int iterations;
    cin >> iterations;

    // int points = pow((iterations * 2 + 1), 2);
    int difference = 2;
    int points = 3;
    for (int i = 1; i < iterations; i++)
    {
        points += pow(difference, i);
    }

    cout << pow(points, 2) << endl;
}