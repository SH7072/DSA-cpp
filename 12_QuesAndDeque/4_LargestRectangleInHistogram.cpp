// brute force approach
//  find the largest rectangle(of max area) which can fit in a histogram

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
    int minHt=INT_MAX;
        for (int j = i; j < n; j++)
        {
             minHt=min(minHt,v[j]);
            int length=j-i+1;
            ans=max(ans,length*minHt);
        }
        
    }
  

    cout<<ans;
    return 0;
}