// For a given array and integers k & x find the
// maximum sum subarray of size k and having sum less than x.
// Approach sliding window
// Time O(n)

#include <bits/stdc++.h>

using namespace std;

int maxSumSubarray(vector<int> arr, int n, int k, int x)
{
    int sum = 0;
    int ans = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    if (sum < x)
    {
        ans = sum;
    }

    for (int i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];

        if (sum < x)
        {
            ans = max(ans, sum);
        }
    }

    return ans;
}

int main()
{

    vector<int> arr = {7, 5, 4, 6, 8, 9};

    int k = 3;
    int x = 20;
    int n = arr.size();

    cout << maxSumSubarray(arr, n, k, x);

    return 0;
}