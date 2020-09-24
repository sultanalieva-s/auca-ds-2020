#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t != 0)
    {

        string inp;
        getline(cin, inp);

        if (inp.size() == 3)
        {
            int a = stoi(inp.substr(0, 1));
            int b = stoi(inp.substr(1));

            cout << a + b << endl;
        }
        else
        {
            cout << "skipped" << endl;
        }

        t--;
    }
}