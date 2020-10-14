#include<iostream>
#include<string>
#include<cctype>
#include <algorithm>

using namespace std;

bool isPalindrome(const string &line)
{
    string b;
    for(auto c : line)
    {
        if(isalpha(c))
        {
            b+= tolower(c);
        }
    }
 
    string t = b;
    reverse(t.begin(), t.end());

    return b == t;
}

int main()
{
    for(string line; getline(cin,line);)
    {
        cout<< isPalindrome(line) ?  "palindrome\n" : "not a palindrome\n";

    }
}



