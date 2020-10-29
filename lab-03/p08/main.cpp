#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int numOfpeople;

    while (cin >> numOfpeople)
    {
        vector<string> names(numOfpeople);
        vector<int> moneyInitial(numOfpeople);
        vector<int> moneyRecieved(numOfpeople, 0);

        for (int i = 0; i < numOfpeople; i++)
        {
            string name;
            cin >> name;
            names[i] = name;
        }

        cin.ignore();

        for (int i = 0; i < numOfpeople; i++)
        {
            string name;
            int sumInitial;
            int numOfpeopleToGift;
            string inp;
            getline(cin, inp);
            stringstream inpp(inp);

            inpp >> name >> sumInitial >> numOfpeopleToGift;

            vector<string>::iterator iter = find(names.begin(), names.end(), name);

            int nameIndex = distance(names.begin(), iter);

            moneyInitial[nameIndex] = sumInitial;
            int sumForEach = numOfpeopleToGift != 0 ? sumInitial / numOfpeopleToGift: 0;
            if(numOfpeopleToGift!=0)
            {
                int remaining = sumInitial - (sumInitial / numOfpeopleToGift * numOfpeopleToGift);
                moneyInitial[nameIndex] -= remaining;
            }

            for (int j = 0; j < numOfpeopleToGift; j++)
            {
                string nameToGift;
                inpp >> nameToGift;

                vector<string>::iterator iter1 =  find(names.begin(), names.end(), nameToGift);
                int nameToGiftIndex = distance(names.begin(), iter1);
                moneyRecieved[nameToGiftIndex] += sumForEach;
            }
        }

        for (int i = 0; i < numOfpeople; i++)
        {
            cout << names[i]<<" " << moneyRecieved[i] - moneyInitial[i] << endl;
        }

        cout<<endl;
    }
}