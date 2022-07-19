// Allocate Minimum Number of pages
//  n-number of pages in n different books[ascending order]
//  m-number of students
// All the books have to be distributed among m students, consecutively.
// Allocate the pages in such a way that maximum pages allocated to a
// student is minimum.

#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentRequired = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (sum + arr[i] > mid)
        {
            studentRequired++;
            sum = arr[i];
            if (studentRequired > m)
            {
                return false;
            }
        }
        else
        {
            sum += arr[i];
        }
    }

    return true;
}

int allocateMaximumPages(vector<int> arr, int n, int m)
{
    int sum = 0;
    if (m > n)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0, end = sum, ans = INT_MAX;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = min(ans, mid);
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{

    vector<int> arr = {12, 34, 67, 90};
    int n = arr.size();
    int m = 2;
    cout << allocateMaximumPages(arr, n, m);
    return 0;
}