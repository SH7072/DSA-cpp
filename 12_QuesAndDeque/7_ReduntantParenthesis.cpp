// return 1 if exp has extra parenthesis ((a+b))
// logic push opening brackets and operator in a stack

#include <bits/stdc++.h>

using namespace std;

int main()
{

    bool isRedundant=false;
    string s;

    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {

            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i]==')')
        {   
            if (st.top()=='(')
            {
                isRedundant=true;
            }
            
            while (st.top()=='+'||st.top()=='-'||st.top()=='/'||st.top()=='*')
            {
                st.pop();
            }
            st.pop();
            
        }
        
    }
    cout<<isRedundant;

    return 0;
}