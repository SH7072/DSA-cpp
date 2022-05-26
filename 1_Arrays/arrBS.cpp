#include <bits/stdc++.h>
using namespace std;


int BinarySearch(int key,int arr[],int n){
    
    int start=0;
    int end=n;
    while (start<=end)  
    {
        int mid=(start+end)/2;

        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }else{
            start=mid+1;
        }
        
        
    }
    return -1;
    
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];   
    }
    
    int key;
    cin>>key;
    //bs will work only for sorted arrays
    cout<<BinarySearch(key,arr,n);

    return 0;
}