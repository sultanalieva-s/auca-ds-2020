#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int casse = 1;

    while (t != 0)
    {

        vector<string> urls;
        vector<int> nums;

        for (int i = 0; i < 10; i++)
        {
            string url;
            int n;
            cin >> url >> n;
            urls.push_back(url);
            nums.push_back(n);
        }
        int maxx = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            maxx = max(maxx,nums[i]);
        }

        cout<<"Case #"<<casse<<":"<<endl;

        for (int i = 0; i < urls.size(); i++)
        {
            if (nums[i] == maxx)
            {
                cout << urls[i] << endl;
            }
        }

        casse++;
        t--;
    }
}