// Print All possible words from phone Digits

#include <bits/stdc++.h>

using namespace std;

    string arr[10]={"", "./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void wordsFromPhoneDigits(string s,string ans){
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char str=s[0];
    string keyAns=arr[str-'0'];

    string ros=s.substr(1);

    for (int i = 0; i < keyAns.length(); i++)
    {
        // wordsFromPhoneDigits(ros,ans);
        wordsFromPhoneDigits(ros,ans+keyAns[i]);
    }
    
}

int main()
{
    wordsFromPhoneDigits("7482426","");
    return 0;
}