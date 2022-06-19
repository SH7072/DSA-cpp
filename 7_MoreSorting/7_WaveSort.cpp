// Given an array, transform the array such that
// arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= .....
// Input: Given an array.
// Output: print the sorted array.
// Time Complexity: O(N), single pass
// Space Complexity: O(1)

#include <bits/stdc++.h>

using namespace std;

void WaveSort(int arr[], int n)
{

    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i + 1] < arr[i] && i < n - 1)
        {
            swap(arr[i + 1], arr[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 3, 5, 8, 9, 12, 6, 3, 7, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    WaveSort(arr, n);
    return 0;
}