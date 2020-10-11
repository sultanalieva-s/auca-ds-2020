#include <iostream>
#include <string>
using namespace std;

int main()
{
    string in;

    while (cin >> in && in != "END")
    {

        string size = to_string(in.size());
        string nextsize = to_string(size.size());
        int i = 0;

        while (size != nextsize)
        {
            i++;
            size = to_string(size.size());
            nextsize = to_string(size.size());
        }

        cout << i + 2 << endl;
        
    }
}