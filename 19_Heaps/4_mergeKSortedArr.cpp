// ***#
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int main()
{

    int k;

    vector<vi> a(k);

    lp(i, 0, k)
    {
        int size;
        cin >> size;
        a[i] = vector<int>(size);

        lp(j, 0, size)
        {
            cin >> a[i][j];
        }
    }

    vi idx(k, 0);

    priority_queue<pii, vii, greater<pii>> pq;

    lp(i, 0, k)
    {
        pq.push({a[i][0], i});
    }

    vi ans;
    while (!pq.empty())
    {
        pii x = pq.top();
        pq.pop();
        ans.push_back(x.ff);

        if (idx[x.ss] < a[x.ss].size())
            pq.push({a[x.ss][idx[x.ss] + 1], x.ss});

        idx[x.ss] += 1;
    }

    lp(i, 0, ans.size())
    {
        cout << ans[i] << endl;
    }
    cout << endl;

    return 0;
}