// Given an array of 0s and 1s, we can change
//  upto k elements from 0 to 1.

// Return the length of longest contoguous
// subarray having only 1s.

#include <bits/stdc++.h>

using namespace std;

int maxConsOneAfterKChange(vector<int> a,int k)
{
    int n = a.size();
    int zerocount = 0;
    int ans(0);
    int i=0;
    
    for (int j = 0; j < n; j++)
    {
        if(a[j]==0)
        {
            zerocount++;

        }
        while (zerocount>k)
        {
            if(a[i]==0){
                zerocount--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
    }
    
    return ans;
}
int main()
{

    vector<int> arr = {1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1};

    cout<<maxConsOneAfterKChange(arr,3);
 
    return 0;
}