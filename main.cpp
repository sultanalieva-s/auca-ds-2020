#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //g++ -D_NO_SECRETS main.cpp -o main

    cout << "lul" << endl;

#ifdef NO_SECRETS
    cout << "lol" << endl;
#endif

    //g++ -DONLINE_JUDGE main.cpp -o main

    for (int i = 0; i < 10; i++)
    {
#ifndef ONLINE_JUDGE
        cout << i << endl;
#endif
    }

    //CONDITIONAL COMPILATION debug mode:g++  -D_GLIBCXX_DEBUG main.cpp -o main

    vector<int> v = {1, 2, 3};
    cout << "index: ";
    int i;
    cin >> i;
    cout << v[i] << "\n";

    
}