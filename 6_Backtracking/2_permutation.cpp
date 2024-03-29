// Given array of distinct integers, return all the permutations. You can return
// the ans in any order.
// Time O(n!) (both functions)
//
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> ans;
void permute(vector<int> &a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permute(a, idx + 1);
        swap(a[i], a[idx]);
    }
    return;
}
void permute2(vector<int> &a)
{
    sort(a.begin(), a.end());
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(), a.end()));
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
    permute2(a);
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