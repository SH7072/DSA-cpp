// for a given array and an integer k, check if ant subarray of size
// k in the array such that elements in the subarray form a number
// divisible by 3.

#include <bits/stdc++.h>

using namespace std;

void makeNumberFromSubarray(vector<int> arr, int k)
{
    pair<int, int> ans;
    int n = arr.size();

    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    bool found = false;

    if (sum % 3 == 0)
    {
        ans = make_pair(0, k - 1);
        found = true;
    }

    for (int j = k; j < n; j++)
    {
        if (found)
        {
            break;
        }
        sum = sum + arr[j] - arr[j - k];
        if (sum % 3 == 0)
        {
            ans = make_pair(j - k + 1, j);
            found = true;
        }
    }

    if (!found)
    {
        ans = make_pair(-1, 0);
    }
    if (ans.first == -1)
    {
        cout << "Does not exist" << endl;
    }
    else
    {
        for (int i = ans.first; i <= ans.second; i++)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{

    vector<int> arr = {23, 45, 12, 56, 82};

    int k = 3;

    makeNumberFromSubarray(arr, k);

    return 0;
}
