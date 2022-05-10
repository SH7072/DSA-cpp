#include <bits/stdc++.h>

using namespace std;

int recordBreaker(int arr[],int n){
    int recBr=0;
    int max1=INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        max1=max(max1,arr[i]);
        if (i==n-1)
        {
            recBr++;
        }else if (i!=n-1&&arr[i+1]<max1)
        {
            recBr++;
        }    
    }
    
    return recBr;        
}

int main()
{

    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<recordBreaker(arr,n+1);
    return 0;
}