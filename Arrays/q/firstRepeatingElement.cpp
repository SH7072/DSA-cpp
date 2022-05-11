//
#include <bits/stdc++.h>

using namespace std;

void firstRepeatingElement(int arr[],int n){
    int min1=INT_MAX;
    int N=1000001;
    int index[N];
    for (int i = 0; i < N; i++)
    {
        index[i]=-1;

    }
   for (int i = 0; i < n; i++)
   {
       int j=arr[i];
       if (index[j]!=-1)
       {
            min1 = min(index[j], min1);
       }else
       {
           index[j]=i;

       }
       
   }
        if (min1 == INT_MAX)
    {
        cout<<"-1";
    }
    else
    {
        cout<< min1;
    }
};
   
    
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    firstRepeatingElement(arr, n);

    return 0;
}