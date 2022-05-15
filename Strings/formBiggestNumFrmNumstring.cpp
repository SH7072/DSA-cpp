// Form the biggest number from the numeric string

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str="53214";
    sort(str.begin(),str.end(),greater<int>());

    cout<<str<<endl;

    return 0;
}