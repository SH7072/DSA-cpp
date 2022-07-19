// Given an array with n elements that represents n positions along a straight line.
// Find K elements such that the minimum distance between any 2 elements is the maximum possible.

#include <bits/stdc++.h>

using namespace std;

bool isFeasible(int mid,vector<int>arr,int n,int k )
{

    int pos=arr[0],count=1;

    for (int i = 1; i < n; i++)
    {
        if(arr[i]-pos>=mid)
        {
            pos=arr[i];
            count++;
            if(count==k)
            {
                return true;
            }
        }
    }
    
    return false;
}

int largestMinDistance(vector<int> v, int n, int k)
{

    sort(v.begin(), v.end());
    int result = -1;

    int left = 1, right = v[n - 1];

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (isFeasible(mid, v, n, k))
        {
            result = max(result, mid);
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return result;

}

int main()
{

    vector<int> arr={1,2,8,4,9};
    // for (auto &it : arr)
    // {
    //     cin >> it;
    // }
    int n = arr.size();
    int k=3;
    cout<<largestMinDistance(arr,n,k);
    return 0;
}