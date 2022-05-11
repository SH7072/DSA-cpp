
#include <bits/stdc++.h>

using namespace std;

void Subarrays(int arr [],int n){
   int sum=0;
    for (int i = 0; i < n ; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < j+1; k++)
            {
                cout<<arr[k]<<" ";    
            }            
        cout<<endl;
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
    Subarrays(arr,n);
    
    return 0;
}