// For a given array and an integer k check if any subarray of size
// k exist in the array such that concatenation of elements form a palindrome.

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int num)
{
    int temp = num, rev = 0;

    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if (rev == num)
    {
        return true;
    }
    return false;
}

int findPalindromicSubarray(vector<int> arr, int k)
{

    int n = arr.size();
    int num = 0;
    for (int i = 0; i < k; i++)
    {
        num = num * 10 + arr[i];
    }

    if (isPalindrome(num))
    {
        return 0;
    }

    for (int j = k; j < n; j++)
    {
        num = (num % (int)pow(10, k - 1)) * 10 + arr[j];
        if (isPalindrome(num))
        {
            return j - k + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 5, 1, 1, 5};

    int k = 4;
    // int x = 51;
    int n = arr.size();

    int ans = findPalindromicSubarray(arr, k);

    if (ans == -1)
    {
        cout << "DNE" << endl;
    }
    else
    {
        for (int i = ans; i < ans + k; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}