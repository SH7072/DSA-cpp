#include <bits/stdc++.h>

using namespace std;

void reverseSentence(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";

        while (s[i] != ' ' && i < s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    //printing
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<endl;
    
}

int main()
{

    string s = "Hello, how are you?";
   reverseSentence(s);
    return 0;
}