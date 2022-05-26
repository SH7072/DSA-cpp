//Write a program to find a unique number in an array where all numbers except
// one, are present twice.

#include <bits/stdc++.h>

using namespace std;

int findUniqueNumber(int arr[],int n){
        int x;
    for (int i = 0; i < n; i++)
    {
        x =x^arr[i];
    }
    return x;
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
    cout<<findUniqueNumber(arr,n);
    return 0;
}