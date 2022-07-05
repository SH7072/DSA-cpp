// Given an arr and an integer k
// Print the maximum element which is present
// in window of size k in an array.

// method 1 direct approach
//  Time O(nlogn)

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (auto &i : v)
    {
        cin >> i;
    }

    multiset<int, greater<int>> m1;
    vector<int> res;

    for (int i = 0; i < k; i++)
    {
        m1.insert(v[i]);
    }
    res.push_back(*m1.begin());

    for (int i = k; i < n; i++)
    {
        m1.erase(m1.lower_bound(v[i - k]));
        m1.insert(v[i]);
        res.push_back(*m1.begin());
    }

    for (auto it : res)
    {
        cout << it << " ";
    }
    
    return 0;
}