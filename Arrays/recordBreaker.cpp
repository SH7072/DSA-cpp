#include <bits/stdc++.h>

using namespace std;

int recordBreaker(int arr[], int n)
{
    int recBr = 0;
    int max1 = INT_MIN;
   
    for (int i = 0; i < n; i++)
    {

        if ((i!=n-1)&&(arr[i] > max1) && (arr[i] > arr[i+1]))
        {
            recBr++;
        }
        else if (i==n-1&& arr[i]>max1)
        {
            recBr++;
        }
        max1 = max(max1, arr[i]);
        
        
    }

    return recBr;
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
    
    cout << recordBreaker(arr, n );
    return 0;
}