// Return the index of first and last occurrence of a number in an array

#include <bits/stdc++.h>

using namespace std;

int firstOccurrence(int arr[], int n, int key, int index)
{

    if (index == n)
    {
        return -1;
    }

    if (arr[index] == key)
    {
        return index;
    }

    return firstOccurrence(arr, n, key, index + 1);
}
int lastOccurrence(int arr[], int n, int key, int index)
{
    // order matters

    int restArr = lastOccurrence(arr, n, key, index + 1);

    if (restArr != -1)
    {
        return restArr;
    }
    if (index == n)
    {
        return -1;
    }
    if (arr[index] == key)
    {
        return index;
    }

    return -1;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int i;
    cin >> i;
    // cout << firstOccurrence(arr, n, key, i);
    cout << lastOccurrence(arr, n, key, i);

    return 0;
}