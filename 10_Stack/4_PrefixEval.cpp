#include <bits/stdc++.h>

using namespace std;

void insertAtBottom(stack<int> &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }
    int topelement = st.top();
    st.pop();
    insertAtBottom(st, ele);
    st.push(topelement);
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int ele = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, ele);
}
void prefixEval(string s)
{

    stack<int> st;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i]-'0')
        }
        else
        {
            st.po
        }
        
    }
}
int main()
{

    stack<int> st1;
    st1.push(1);
    st1.push(14);
    st1.push(15);
    st1.push(51);
    st1.push(71);
    st1.push(8);

    prefixEval(st1);

    // print stack
    //  while (!st1.empty())
    //  {
    //      cout<<st1.top()<<" ";
    //      st1.pop();
    //  }cout<<endl;

    return 0;
}