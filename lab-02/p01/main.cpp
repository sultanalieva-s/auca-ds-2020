#include <iostream>
using namespace std;

int main()
{
    int inp;
    while(cin >> inp && inp != 0)
    {
        if(inp == 0)
        break;

        int sumOfInp = 0;
        int t = inp;

        while(t > 0)
            {
                sumOfInp += t%10;
                t /= 10;
            }

        int startNum = 11;

        while(true)
        {
            int production = startNum * inp;
            int sumOfProd = 0;
            while(production > 0)
            {
                sumOfProd += production%10;
                production /= 10;
            }

            if(sumOfInp == sumOfProd){
                cout<< startNum << endl;
                break;
            }else{
                startNum++;
            }
        }
    }
    return 0;
}
