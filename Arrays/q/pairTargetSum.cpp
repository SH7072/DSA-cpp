// Find whether there exist 2 numbers that sum to K.
#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
// Brute Force O(n^2)
bool pairSum(int arr[],int n,int k){


   for (int i = 0; i < n; i++)
   {
        for (int j = i; j < n; j++)
       {
           if (k==arr[i]+arr[j])
           {
               cout<<"\n"<<i<<" "<<j<<endl;
               return true;
           }
           
       }
       
   }
    return false;
}
*/
bool pairSum(int arr[],int n,int k){
    
    int low=0;
    int high=n-1;
    int pSum=0;
    while (low<high)
    {
        pSum=arr[low]+arr[high];
   
        if (pSum<k)
        {
            low++;
        }
        else if (pSum>k)
        {
            high--;
        }
        else
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
    }
        
        return false;
}

int main()
{

    int n,k;
    cin >> n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    // printArray(arr,n);
    cout<<pairSum(arr,n,k);

    return 0;
}