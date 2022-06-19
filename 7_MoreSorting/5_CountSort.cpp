// The O(N) sort.
// Note: Only limited to small positive integers only.
// Input: Given an array.
// Output: print the sorted array.
// Time Complexity: O(N)
// Space Complexity: O(max(Arr))

#include <bits/stdc++.h>

using namespace std;

void countSort(int arr[], int n)
{

    int max1 = INT_MIN;
    int res[n];
    for (int i = 0; i < n; i++)
    {
        max1 = max(max1, arr[i]);
    }
    max1++;
    vector<int> countArr(max1);
    for (int i = 0; i < n; i++)
    {
        countArr[arr[i]]++;
    } // traversing arr and modifying count of element in count arr

    //  for (int i = 0; i < max1; i++)
    // {
    //     cout<<countArr[i]<<" ";

    // }//print count arr(check)
    // cout<<endl;

    for (int i = 1; i < max1; i++)
    {
        countArr[i] += countArr[i - 1];
    } // prefix sum of count arr

    // for (int i = 0; i < max1; i++)
    // {
    //     cout<<countArr[i]<<" ";

    // }//printing count arr after prefix sum(check)
    // cout<<endl;

    for (int i = n - 1; i >= 0; i--)
    {
        countArr[arr[i]]--;
        res[countArr[arr[i]]] = arr[i];
    }
    //  for each val in arr decrementing val at pos arr[i] in count arr
    // and pushing the value of arr at posn equal to count array val

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 3, 5, 5, 9, 12, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    countSort(arr, n);
    return 0;
}