#include <bits/stdc++.h>

using namespace std;

    void sumOfSubArrays(int arr[],int n ){
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum=0;
            for (int j = i; j < n; j++)
            {
        
                sum+=arr[j];
                cout<<sum<<" ";
            }
            
        }
            
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

    sumOfSubArrays(arr,n);
    return 0;
}