// Given an array containing only 0,1 and 2. You have to sort the array in O(N) time,
// single pass, and O(1) space.
// Input: Given an array, containing only 0,1, and 2.
// Output: print the sorted array.
// Time Complexity: O(N), single pass
// Space Complexity: O(1)

#include <bits/stdc++.h>

using namespace std;

void DNFSort(int arr[], int n)
{

    int low = 0, mid = 0, high = n - 1;

    while (mid != high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
        }
        if (arr[mid] == 1)
        {
            mid++;
        }
        if (arr[mid] == 2)
        {
            swap(arr[high], arr[mid]);
            high--;
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

    int arr[] = {1, 0, 1, 1, 2, 1, 2, 1, 0, 2, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    DNFSort(arr, n);
    return 0;
}