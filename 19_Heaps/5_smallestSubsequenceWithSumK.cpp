#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define ff = first
#define ss = second

int main()
{

    int n, k;

    cin >> n >> k;
    vi a(n);
    lp(i, 0, n)
    {
        cin >> a[i];
    }

    priority_queue<int, vi> pq;

    lp(i, 0, n)
    {
        pq.push(a[i]);
    }

    int sum = 0;
    int cnt = 0;

    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
        cnt++;

        if (sum >= k)
        {
            break;
        }
    }
    if (sum < k)
        cout << "-1" << endl;
    else
        cout << cnt << endl;

    return 0;
}
