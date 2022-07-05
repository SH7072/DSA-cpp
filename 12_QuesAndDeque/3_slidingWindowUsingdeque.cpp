// Method 2
// Using deque
// Time O(n)

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

    deque<int> dq;

    vector<int> res;

    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && v[dq.back()] < v[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(v[dq.front()]);
    for (int i = k; i < n; i++)
    {
        if (dq.front() == i - k)
        {
            dq.pop_front();
        }

        while (!dq.empty() && v[dq.back()] < v[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);
        res.push_back(v[dq.front()]);
    }
    for(auto it:res){
        cout<<it<<" ";
    }
        cout<<endl;

    return 0;
}