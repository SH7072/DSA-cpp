// Given sorted array rotated from a pivot element.
// Find the pivot element in Time less than O(n). 
 
#include <bits/stdc++.h>

using namespace std;

int searchInArr(vector<int> arr, int key, int low, int high)
{

    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    if (arr[low] <= arr[mid])
    {
        if (key >= arr[low] && key <= arr[mid])
        {
            return searchInArr(arr, key, low, mid - 1);
        }
        return searchInArr(arr, key, mid + 1, high);
    }

    if (key >= arr[mid] && key <= arr[high])
    {
        return searchInArr(arr, key, mid + 1, high);
    }
    return searchInArr(arr, key, low, mid - 1);
}

int main()
{

    vector<int> arr = {6, 7, 8, 9, 10, 1, 2, 5};

    int n = 8;
    int key = 9;

    cout << searchInArr(arr, key,0,7);


    return 0;
}