//  find the largest rectangle(of max area) which can fit in a histogram
// Optimised approach using stack

#include <bits/stdc++.h>

using namespace std; 

int getMaxAreaRect(vector<int> a)
{
    int n = a.size();

    stack<int> st;
    int ans = 0;
    int i = 0;
    a.push_back(0);
    while (i < n)
    {
        while (!st.empty() && a[st.top()] > a[i])
        {
            int t = st.top();
            int h = a[t];
            st.pop();

            if (st.empty())
            {
                 ans = max(ans, h * i);
   
            }
            else
            {
                int len = i - 1 - st.top();
                ans = max(ans, h * len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main()
{

    int n;
    cin >> n;
    vector<int> v1(n);
    for (auto &it : v1)
    {
        cin >> it;
    }

    cout << getMaxAreaRect(v1);
    return 0;
}