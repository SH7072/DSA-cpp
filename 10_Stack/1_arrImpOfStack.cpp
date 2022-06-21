#include <bits/stdc++.h>

using namespace std;

#define n 100

class Stack
{

    int top;
    int* arr;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {

        if (top == n - 1)
        {

            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {

        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        top--;
    }

    int Top()
    {

        if (top == n - 1)
        {

            cout << "Stack Overflow" << endl;
            return -1;
        }

        return arr[top];
    }

    bool empty(){

        return top==-1;
    }
};

int main()
{

    Stack st;
    
    st.push(1);
    st.push(17);
    st.push(13);
    st.push(136);
    st.push(21);
    st.push(9);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;


    return 0;
}