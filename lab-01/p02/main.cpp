#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int kNameWidth = 25;
const int kAverageWidth = 40;

int main()
{
    cout << setfill('.')<<fixed<<setprecision(2);
    for (string name; cin >> name;)
    {
        double sum = 0;
        int nGrades = 0;
        for (int grade; cin >> grade;)
        {
            sum += grade;
            nGrades++;
        }
        if (nGrades != 0)
        {
            cout << left << setw(kNameWidth)<< name << "|" << right<< setw(kAverageWidth) << sum / nGrades << endl;
        }
        else
        {
            cout << left << setw(kNameWidth) << name << "|"
                 << right <<setw(kAverageWidth) << "no data" << endl;
        }

        if (cin.fail())
        {
            cin.clear();
        };
    }
}
