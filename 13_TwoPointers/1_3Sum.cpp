// given an arr and a val,find if there exist 3 numbers
//  whose sum is equal to given value

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int k;
    cin>>n>>k;
    vector<int> v(n);

    for (auto &it : v)
    {
        cin >> it;
    }

    sort(v.begin(), v.end());

    bool ans = false;

    // int mid=(start+end)/2;
    for (int i = 0; i < n; i++)
    {
        int start = i+1;
        int end = n - 1;
        int target = v[start] + v[end]+v[i];

        while (start < end)
        {
            if (target   > k)
            {
                target = target - v[end] + v[end - 1];
                end--;
            }
            else if (target  < k)
            {
                target = target - v[start] + v[start + 1];
                start++;
            }
            else if(target==k)
            {
                ans = true;
                break;
            }
        }
    }
    
    cout<<ans;

    return 0;
}