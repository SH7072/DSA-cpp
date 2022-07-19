// Painters Partition Problem
//  n-length of n diff boards
//  m-painters available
//   A painter paints 1 unit of board in 1 unit time &
//   each painter will paint consecutive boards. Find
//  the min time that will be required to paint all boards.

#include <bits/stdc++.h>

using namespace std;

int isPossible(vector<int> arr, int n, int mid)
{
    int sum = 0, painters = 1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > mid)
        {
            sum = arr[i];
            painters++;
        }
    }

    return painters;
}

int MinTime(vector<int> arr, int n, int m)
{
   

    int totalLength = 0, largestLen = 0;
    for (int i = 0; i < n; i++)
    {
        largestLen = max(arr[i], largestLen);
        totalLength += arr[i];
    }

    int start = largestLen, end = totalLength;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        int painters = isPossible(arr, n, mid);
        if (painters <= m)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }

    return start;
}
int main()
{

    vector<int> arr = {10,20,30,40};
    int n = arr.size();
    int m = 2;
    cout << MinTime(arr,n,m);
    return 0;
}