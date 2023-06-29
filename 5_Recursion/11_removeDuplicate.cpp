// Remove Duplicate characters from a char arr.

#include <bits/stdc++.h>

using namespace std;

string removeDuplicates(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch=s[0];
    string str=removeDuplicates(s.substr(1));
    if (ch==str[0])
    {
        return str;
    }
        return (ch+str);
    
}

int main()
{

    cout<<removeDuplicates("aaaaaaabbbcdeeeefffffjjjgg");
    
    return 0;
}