// Problem Statement: There is a new barn with N stalls and C cows.
// The stalls are located on a straight line at positions x1,….,xN
// (0 <= xi <= 1,000,000,000). We want to assign the cows to the stalls,
// such that the minimum distance between any two of them is as
// large as possible. What is the largest minimum distance?

#include <bits/stdc++.h>

using namespace std;

bool canPlace(vector<int> arr, int n, int m, int dist)
{
    int curr = arr[0], cows = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - curr >= dist)
        {
            cows++;
            curr = arr[i];
        }
        if (cows == m)
        {
            return true;
        }
    }

    return false;
}

int largestMinDist(vector<int> arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }

    sort(arr.begin(), arr.end());

    int low = 1, high = arr[n - 1] - arr[0];
    int res = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (canPlace(arr, n, m, mid))
        {
            res = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return res;
}

int main()
{

    vector<int> arr = {10, 20, 30,50, 40};
    int n = arr.size();
    int m = 3;
    cout << largestMinDist(arr, n, m);

    return 0;
}