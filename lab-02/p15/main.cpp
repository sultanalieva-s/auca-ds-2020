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

        if (inp != "P=NP")
        {
            int a = stoi(inp.substr(0, inp.find('+')));//change limits
            int b = stoi(inp.substr(inp.find('+')));//change limits

            cout << a + b << endl;
        }
        else
        {
            cout << "skipped" << endl;
        }

        t--;
    }
}