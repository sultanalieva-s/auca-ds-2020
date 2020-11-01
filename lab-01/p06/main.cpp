#include "../../libs/StrUtils.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
    vector<vector<string>> data = {
        {"s", "a"},
        {"a", "d"},
        {"a", "t"},
    };

    for(const auto &v :data)
    {
        cout<<join(v)<<endl;
    }
}
