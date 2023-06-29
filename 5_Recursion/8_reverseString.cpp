#include <bits/stdc++.h>

using namespace std;

void reverseString(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    string restOfString=str.substr(1);
    reverseString(restOfString);
    cout<<str[0];
}

int main()
{
    cout<<endl;
    reverseString("hello!");
    
    return 0;
}