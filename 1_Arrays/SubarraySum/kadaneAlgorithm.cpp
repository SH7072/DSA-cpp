#include <bits/stdc++.h>

using namespace std;

    void kadaneAlgorithm(int arr[],int n){
        int currentSum=0;
        int maxSum=INT_MIN;
      
        
        for (int i = 0; i < n; i++)
        {
            currentSum+=arr[i];
            maxSum=max(currentSum,maxSum);
            if(currentSum<0){
                currentSum=0;
            }
        }
        cout<<maxSum;
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

        kadaneAlgorithm(arr,n);

    return 0;
}