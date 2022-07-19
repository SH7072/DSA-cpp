// For a given array and an integer x, find the Minimum Subarray size
// for which sum > x.
// APP- Sliding Window
// Time O(n)

#include <bits/stdc++.h>

using namespace std;

int MinSubarraySize(vector<int>arr,int n,int x)
{

    int sum=0,ans=n+1;
    int j=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];

        while(sum>x)
        {
            ans=min(ans,i-j+1);
            sum=sum-arr[j];
            j++;
        }
    }
    
    return ans;

}

int main()
{

    
    vector<int> arr = {1, 45, 6, 10, 54};

    // int k = 3;
    int x = 51;
    int n = arr.size();

    cout << MinSubarraySize(arr, n,  x);
    //if min length is n+1 no such element exist
    return 0;
}