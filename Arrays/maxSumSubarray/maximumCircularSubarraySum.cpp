#include <bits/stdc++.h>

using namespace std;
// kadane on circular array
int kadaneAlgorithm(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}
void maximumCircularSubarraySum(int arr[], int n)
{
    int nonWrapSum = kadaneAlgorithm(arr, n);
    int wrapSum = 0;
    
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    
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

    maximumCircularSubarraySum(arr, n);
    return 0;
}