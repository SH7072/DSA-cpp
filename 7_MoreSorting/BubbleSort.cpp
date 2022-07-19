#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}

void BubbleSort(int arr [],int n){
    int count=0;//no of iteration
        while (count<n-1)
        {   
            for (int i = 0; i < n-count-1; i++) //for each iteration n-count-1 comparison
            {
                if (arr[i]>arr[i+1])
                {
                    swap(arr[i],arr[i+1]);
                }
                
            }
            count++;
        }
    printArray(arr,n);    
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
    BubbleSort(arr,n);
    return 0;
}