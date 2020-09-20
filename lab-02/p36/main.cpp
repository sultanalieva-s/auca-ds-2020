#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> days;
    vector<int> maximums;
    while (n != 0)
    {
        int t;
        cin >> t;
        days.push_back(t);
        n--;
    }

    for (int i = 0; i < days.size() - 2; i++)
    {
        maximums.push_back(max(days[i], days[i + 2]));
    }
    int min = maximums[0];
    int index = 0;
    for (int i = 0; i < maximums.size(); i++)
    {
        if (min > maximums[i])
        {
            min = maximums[i];
            index = i;
        }
    }
    index++;

    cout << index << " " << min << endl;
}