// Count the inversions in the given array.
// Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j


//Brute Force
// Time Complexity: O(N^2)

#include <bits/stdc++.h>

using namespace std;

int countInversions(int arr[],int n){

    int inversions=0;
    for (int i = 0; i < n; i++)
    {
        for (int j  = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                inversions++;
            }
            
        }
        
    }
    
    return inversions;
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
    
    cout<<  countInversions(arr, n);
 
    return 0;
}