// For a array find the peek element in the array.
// Peek element is the one which is greater than both,
// left and right neighbour's of itself.

#include <bits/stdc++.h>

using namespace std;

int findPeekElement(vector<int> arr, int low, int high)
{
    int n=arr.size();
    int mid = low + (high - low) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid = n - 1 || arr[mid + 1] <= arr[mid]))
    {
        return mid;
    }

    else if (mid > 0 && arr[mid - 1] > arr[mid])
    {
        return findPeekElement(arr, low, mid - 1);
    }
    else
    {
        return findPeekElement(arr, mid + 1, high);
    }
}

int main()
{

    vector<int> arr = {0, 4, 2, 6, 3, 7, 5};

    cout << findPeekElement(arr, 0, 6) << endl;
    return 0;
}
