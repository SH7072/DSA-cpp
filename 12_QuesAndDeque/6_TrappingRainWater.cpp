
#include <bits/stdc++.h>

using namespace std;

int rainWater(vector<int> a)
{

    stack<int> st;
    int n = a.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            int curr = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }
            int width = i - st.top() - 1; //-1 coz water is trapped between both bars

            ans += width * (min(a[i], a[st.top()]) - a[curr]);
        }
        st.push(i);
    }

    return ans;
}

int main()
{
    vector<int> a = {0, 1, 0, 2, 1,0,1, 3, 2, 1, 2, 1};
    cout << rainWater(a);

    return 0;
}