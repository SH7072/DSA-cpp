
//Brute Force app:-
#include <bits/stdc++.h>

using namespace std;

void maxSumSubarray(int arr [],int n){
    int maxSum=INT_MIN;
    for (int i = 0; i < n ; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;   
            for (int k = i; k <= j; k++)
            {
                sum+=arr[k];
            }
                // cout<<sum<<" "<<endl; //sum of eac0h sub array
                maxSum=max(maxSum,sum);
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