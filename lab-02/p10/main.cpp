#include <iostream>

using namespace std;

int main()
{
    int easy, med, hard, total;

    cin >> easy >> med >> hard >> total;
    
    if(easy == 0 || med == 0 || hard == 0 || easy+med+hard >= total)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    

}
