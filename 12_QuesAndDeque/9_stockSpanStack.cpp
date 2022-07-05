#include <bits/stdc++.h>

using namespace std;

vector<int> stockSpan(vector<int> prices)
{
    vector<int>ans;

    stack<pair<int,int>> st;
    for(auto it:prices){
        int days=1;
        while (!st.empty()&&st.top().first<=it)
        {
            days+=st.top().second;
            st.pop();
        }
        st.push({it,days});//{} make pair
        ans.push_back(days);
    }

    return ans;
}

int main()
{

    vector<int> a = {100, 80, 60, 70, 60, 75, 85};

    vector<int> ans = stockSpan(a);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}