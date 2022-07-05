// number of consicutive days which have price less than price today
//brute force Approach

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    vector<int> ans;
    
    for (int i = 0; i < n; i++)
    {
        int days = 0;
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] <= arr[i])
            {
                days++;
            }
            else
            {
                break;
            }
        }
        ans.push_back(days);
    }
    int max1 = INT_MIN;
    max1 = *max_element(begin(ans), end(ans));
    cout << max1 << endl;
    return 0;
}