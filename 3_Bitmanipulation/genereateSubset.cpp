// POWER SET
#include <bits/stdc++.h>

using namespace std;

void generateSubset(int n,char arr[])
{
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i&(1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
            cout<<endl;
        
    }
    
}
int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     cout<<endl;
    generateSubset(n,arr);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i];
    // }
    return 0;
}