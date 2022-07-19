// For a given array and integer k, find the maximum perfect numbers
// in a subarray of size k.
// Perfect Number- number which is equal to the sum of its proper
// divisors(+ve) except for the number itself.

#include <bits/stdc++.h>

using namespace std;

bool isNumberPerfect(int num)
{
    int sum = 1;
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (i == num / i)
            {
                sum += i;
            }
            else
            {
                sum += i + num / i;
            }
        }
    }

    if (sum == num && num != 1)
    {
        return true;
    }

    return false;   
}

int maxSum(vector<int> arr, int n, int k)
{
    if (n < k)
    {
        cout << "NP" << endl;
        return -1;
    }

    int sum = 0, res = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    res = sum;
    for (int j = k; j < n; j++)
    {
        sum = sum + arr[j] - arr[j - k];
        res = max(res, sum);
    }

    return res;
}

int maxNumberOfPerfects(vector<int> arr, int n, int k)
{  

    for (int i = 0; i < n; i++)
    {
        if (isNumberPerfect(arr[i]))
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }

    return maxSum(arr, n, k);
}

int main()
{

    vector<int> arr = {28, 2, 3, 6, 496, 99, 8128, 24 };

    int k = 4;

    int n = arr.size();

    cout << maxNumberOfPerfects(arr, n, k) << endl;

    return 0;
}
