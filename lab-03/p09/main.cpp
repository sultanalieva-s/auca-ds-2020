#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numOfDevices, numOfOPerations, deviceconsumption;
    int i = 1;

    while(cin>>numOfDevices>>numOfOPerations>>deviceconsumption)
    {
        if(numOfOPerations == 0 && numOfDevices == 0 && deviceconsumption == 0)
        {
            break;
        }
        vector<int> consumptionLevels;
        vector<bool> isTurnOn(numOfDevices, false);
        int maxConsumption = 0;
        int totalConsumption = 0;

        for(int i = 0; i < numOfDevices; i++)
        {
            int in;
            cin>>in;
            consumptionLevels.push_back(in);
        }
        
        for (int i = 0; i < numOfOPerations; i++)
        {
            int in;
            cin >> in;

            if(!isTurnOn[in-1])
            {
                totalConsumption += consumptionLevels[in-1];
                isTurnOn[in-1] = true;
            }
            else
            {
                totalConsumption -= consumptionLevels[in - 1];
                isTurnOn[in - 1] = false;
            }

            if(maxConsumption < totalConsumption)
            {
                maxConsumption = totalConsumption;
            }

        }

        cout<<"Sequence "<<i++<<endl;
        if(totalConsumption > deviceconsumption)
        {
            cout<<"Fuse was blown."<<endl;
            cout<<endl;
        }
        else
        {
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was "<<maxConsumption<<" amperes." << endl;
            cout << endl;
        }
        
    }
}