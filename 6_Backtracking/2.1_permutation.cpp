// Given array of integers, (Numbers can be repeating) return all the permutations. You can return
// the ans in any order.

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> ans;

void permute(vector<int> a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        if ((i != idx) && (a[i] == a[idx]))
        {
            continue;
        }
        swap(a[i], a[idx]);
        permute(a, idx + 1);
        // swap(a[i], a[idx]);
    }
    return;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (auto &it : a)
    {
        cin >> it;
    }
    sort(a.begin(), a.end());
    permute(a, 0);
    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}