// To print all the permutations of a string.

#include <bits/stdc++.h>

using namespace std;

void permutations(string s, string ans)
{

    if (s.length() == 0)
    {

        cout << ans << endl;
        return;
    }


    for (int i = 0; i < s.length(); i++)
    {

        char str=s[i];
        
        string ros=s.substr(0,i)+s.substr(i+1);

        permutations(ros,ans+str);
    }
    


}

int main()
{

    permutations("ABCD","");
    return 0;
}