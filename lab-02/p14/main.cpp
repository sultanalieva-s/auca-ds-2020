#include <iostream>
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

        string name = inp.substr(0, inp.find(" "));

        int edudate = stoi(inp.substr(inp.find(' '), inp.find('/')));
        inp = inp.substr(inp.find(' ') + 1);

        int borndate = stoi(inp.substr(inp.find(' ') + 1, inp.find('/')));
        inp = inp.substr(inp.find(' ') + 1);

        int courses = stoi(inp.substr(inp.find(' ') + 1));

        if (edudate >= 2010 || borndate >= 1991)
        {
            cout << name << " "
                 << "eligible" << endl;
        }
        else if (courses > 40)
        {
            cout << name << " "
                 << "ineligible" << endl;
        }
        else
        {
            cout << name << " " << "coach petitions" << endl;
        }

        t--;
    }
}
