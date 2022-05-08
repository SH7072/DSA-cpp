#include <bits/stdc++.h>
using namespace std;

int lenearSearch(int key, int arr[], int n)
{//linear Search Algo
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }

    }
    return -1;
}
int main()
{

    int n;
    cout << "Size of Array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int key;
    cin >> key;
    cout<<lenearSearch(key, arr, n);
    return 0;
}