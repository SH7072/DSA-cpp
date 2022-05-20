// print all the sub strings formed by a string

#include <bits/stdc++.h>

using namespace std;


string subStrings(string s,string ans){
    
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return "";
    }
    
    char str=s[0];
    string ros=s.substr(1);
    subStrings(ros,ans);
    subStrings(ros,ans+str);


    return ans;

}

int main()
{

    cout << subStrings("ABC","");

    return 0;
}