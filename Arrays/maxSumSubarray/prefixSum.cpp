// Max sum subarray by using perfix sum 
#include <bits/stdc++.h>

using namespace std;

    void maxSumSubarray(int arr[],int n){
        int prefixSum[n+1];
        prefixSum[0]=0;
    //    cout<<prefixSum[0]<<" ";
        for (int i = 1; i <= n; i++)
        {
                prefixSum[i]=prefixSum[i-1]+arr[i-1];
            // cout<<prefixSum[i]<<" ";
        }
        int maxSum=INT_MIN;
        for (int i = 1; i <=n; i++)
        {
        int sum=0;
            for (int j = 0; j < i; j++)
            {
                sum=prefixSum[i]-prefixSum[j];
                maxSum=max(sum,maxSum);
                
            }
            
        }
        cout<<maxSum<<endl;
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
    maxSumSubarray(arr,n);   
    return 0;
}
