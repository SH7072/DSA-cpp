#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s1="jfhaklanuhskahgajkg";
    

    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        freq[s1[i]-'a']++;
    }
    
    int max1=0;
    char ans='a';
    for (int i = 0; i < 26; i++)
    {
        if (max1<freq[i])
        {
            max1=freq[i];
            ans=i+'a';
        }

    }
    cout<<max1<<" "<<ans<<endl;
    
    return 0;
}