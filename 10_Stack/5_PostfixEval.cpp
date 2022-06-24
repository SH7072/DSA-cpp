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
int postfixEval(string s)
{
    stack<int>st;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='0'&&s[i]<='9'){
            
            st.push(s[i]-'0');
        }
        else
        {
            // int op1=st.top(); since in stack lifo
            int op2=st.top();
            st.pop();
            
            int op1=st.top();
            // int op2=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            
            case '-':
                st.push(op1-op2);
                break;
            
            case '*':
                st.push(op1*op2);
                break;
            
            case '/':
                st.push(op1/op2);
                break;
            
            case '^':
                st.push(pow(op1,op2));
                break;
            
            default:
                break;
            }
        }
        
    }
 return st.top();   
}
int main()
{


cout<< postfixEval("46+2/5*7+");


    return 0;
}