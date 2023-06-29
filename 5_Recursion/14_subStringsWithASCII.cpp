// print all the sub strings formed by a string also print with ascii values

#include <bits/stdc++.h>

using namespace std;

void subStringWithAsciiValue(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char str = s[0];
    int ascii = str;
    string ros = s.substr(1);

    subStringWithAsciiValue(ros, ans);

    subStringWithAsciiValue(ros, ans + str);

    subStringWithAsciiValue(ros, ans + to_string(ascii));
}

int main()
{
    subStringWithAsciiValue("ABC", "");

    return 0;
}