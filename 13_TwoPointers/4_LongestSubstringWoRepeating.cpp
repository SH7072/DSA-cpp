#include <bits/stdc++.h>

using namespace std;

int longestNonRepeatingSubstring(string s)
{
    int n = s.size();
    vector<int> str(256,-1);

    int start(-1);
    int ans=0;

    for (int i = 0; i < n; i++)
    {
        if (str[s[i]]>start)
        {
            start=str[s[i]];
        }
        str[s[i]]=i;
        ans=max(ans,i-start);
    }
    
    return ans;
}

int main()
{
    string s;
    cin >> s;

    cout << longestNonRepeatingSubstring(s) << endl;
    return 0;
}