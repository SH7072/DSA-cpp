// Reverse the string
// the apply infix to postfix logic by inverting the brackets of string
// return reverse res

#include <bits/stdc++.h>

using namespace std;

int prec(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }

    if (c == '*' || c == '/')
    {
        return 2;
    }

    if (c == '^')
    {
        return 3;
    }
    return -1;
}

string infixToPrefix(string s)
{

    reverse(s.begin(), s.end());
    string res;
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {

        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(s[i]) < prec(st.top()))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }

    reverse(res.begin(), res.end());

        return res;
}

// int precedence(char ch)
// {
//     if (ch == '+' || ch == '-')
//     {
//         return 1;
//     }
//     else if (ch == '*' || ch == '/')
//     {
//         return 2;
//     }
//     else if (ch == '^')
//     {
//         return 3;
//     }
//     else
//     {
//         return -1;
//     }
// }
// string infixToPrefix(string s)
// {
//     string res;
//     reverse(s.begin(),s.end());
//     stack<char> st;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (((s[i] >= 'a' && s[i] <= 'z')) || ((s[i] >= 'A' && s[i] <= 'Z')))
//         {
//             res += s[i];
//         }
//         else if (s[i] == ')')
//         {
//             st.push(s[i]);
//         }
//         else if (s[i] == '(')
//         {
//             while (!st.empty() && st.top() != ')')
//             {
//                 res += st.top();
//                 st.pop();
//             }
//             if (!st.empty())
//             {
//                 st.pop();
//             }
//         }
//         else
//         {

//             while (!st.empty() && precedence(st.top()) > precedence(s[i]))
//             {
//                 res += st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }

//     while (!st.empty())
//     {
//         res += st.top();
//         st.pop();
//     }
//     reverse(res.begin(),res.end());
//     return res;
// }

int main()
{

    string s = "(a+b/c)*(a/k-l)";

    cout << infixToPrefix(s) << endl;
    return 0;
}