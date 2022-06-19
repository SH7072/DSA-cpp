// Count the inversions in the given array.
// Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j

// Using Divide and Conquer:
//  Idea: Divide the array into two parts, get the inversions for the left part and get
//  the inversions for the right part recursively and merge the two arrays, and get
//  their inversions.
//  Time Complexity: O(Nlog(N))

#include <bits/stdc++.h>

using namespace std;

long long merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    long long inv=0;

    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {

        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv+=n1-i;
            //a[i],a[i+1],a[i+2],a[i+3]...>b[j] && i<j
            k++;
            j++;
        }
    }

    while (i < n1)
    {

        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {

        arr[k] = b[j];
        j++;
        k++;
    }
    
    return inv;
}

long long MergeSort(int arr[], int l, int r)
{
    long long inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += MergeSort(arr, l, mid);
        inv += MergeSort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;
}

int main()
{

    int arr[] = {3, 5, 6, 9, 1, 2, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int l = 0, r = n - 1;
    cout<<MergeSort(arr, l, r);

    return 0;
}