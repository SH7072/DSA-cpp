// Longest subarray in ap #kickstart
#include <bits/stdc++.h>

using namespace std;

int LongestArithmeticSubarray(int arr[],int n){
    int current=2;
    int ans=2;
    int prevDiff=arr[1]-arr[0];
    int j=2;
    while (j<n)
    {
        if (prevDiff==arr[j]-arr[j-1])
        {
            current++;
            
        }
        else{
            prevDiff=arr[j]-arr[j-1];
            current=2;
           }
        ans=max(ans,current);
        j++;
    }
   return ans; 
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
    cout<<LongestArithmeticSubarray(arr,n);
    return 0;
}