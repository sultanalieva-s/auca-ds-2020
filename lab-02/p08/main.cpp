#include <iostream>
#include <string>
using namespace std;

int main()
{
    string in;
    getline(cin, in);

    if (in.compare("OCT 31") == 0 || in.compare("DEC 25") == 0)
    {
        cout << "yup" << endl;
    }
    else
    {
        cout << "nope" << endl;
    };
}
