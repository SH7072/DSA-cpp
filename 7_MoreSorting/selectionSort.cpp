#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    printArray(arr,n);
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

    SelectionSort(arr, n);

    return 0;
}