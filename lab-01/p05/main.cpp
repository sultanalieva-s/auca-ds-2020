#include "StrUtils.hpp" //ЛИБА
#include <iostream>

using namespace std;

int main()
{
    for (string line; getline(cin, line);)
    {
        vector<string> r = split(line);
        size_t beg = line.size();
        for (const auto &e : r)
        {

            cout << e << endl;
        }
    }
}