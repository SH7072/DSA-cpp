// 
#include <bits/stdc++.h>

using namespace std;

void subarrayWithSumS(int arr[], int n, int s)
{

    int start = 0;
    int end = 0;
    int currentSum = 0;
    while (end >= start && end < n)
    {
        currentSum = arr[start] + arr[end];
        
        if (currentSum==s)
        {
            cout<<start<<" "<<end<<endl;
        }
        else if (currentSum<s)
        {
            
        }
        
        end++;
    }
}
int main()
{

    int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subarrayWithSumS(arr, n, s);
    return 0;
}