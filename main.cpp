#include <iostream>
#include <limits>
#include <cstdint>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // cout << "bool: " << sizeof(bool) << " " << numeric_limits<bool>::min()<<" "<< numeric_limits<bool>::max()<<"\n";
    // cout << "int: " << sizeof(int) << " " << numeric_limits<int>::min()<<" "<< numeric_limits<int>::max()<<"\n";
    // cout << "long: " << sizeof(long) << " " << numeric_limits<long>::min()<<" "<< numeric_limits<long>::max()<<"\n";
    // cout << "long long: " << sizeof(long long) << " " << numeric_limits<long long>::min()<<" "<< numeric_limits<long long>::max()<<"\n";
    // cout << "int64_t: " << sizeof(int64_t) << " " << numeric_limits<int64_t>::min()<<" "<< numeric_limits<int16_t>::max()<<"\n";
    // cout << "double: " << sizeof(double) << " " << numeric_limits<double>::min()<<" "<< numeric_limits<double>::max()<<"\n";

    //dynamic array
    //Arraylist<Integer> a - new ArrayList<Integer>();

    vector<int> v1;

    cout << v1.size() << endl;
    v1.push_back(1);
    //size_t  -- unsigned

    for(int i = 0; i < int(v1.size()); ++i)
    {
        cout << v1[i] << endl;
    }

    cout<<"----------------"<< endl;

    reverse(v1.begin(), v1.end());

    for(int e : v1)
    {
        cout << e << endl;
    }

    vector<int> v2 = {6, 7, 8, 9,10};

    for(int e : v2)
    {
        cout << e << endl;
    }

    vector<int> v3(26, 0);
    char c;
    while(cin >> c)
    {
        ++v3[c - 'a'];

    }

    for(int e : v3)
    {
        cout << e << endl;
    }

    vector<vector<int>> v4(10, vector<int>(10));

    for(int i = 0; i < int(v4.size()); ++i)
    {
        for(int j = 0; j < int(v4[i].size()); )
        {

        }
    }







}