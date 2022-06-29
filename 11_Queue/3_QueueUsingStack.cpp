// Queue using stacks
// Idea:
// There are two types:
// 1. Enqueue costly
// 2. Dequeue costly

//-> Dequeue/ pop costly.
// Idea: we keep 2 stacks, we enqueue in 1 stack. For dequeue, we do shift elements
// into another stack.

#include <bits/stdc++.h>

using namespace std;

class Queue
{

    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s1.empty() && s2.empty())
        {

            cout << "Queue Empty" << endl;
            return -1;
        }

        if (s2.empty())
        {

            while (!s1.empty())
            {
                int temp = s1.top();
                s1.pop();
                s2.push(temp);
            }
        }

        int topval = s2.top();
        s2.pop();

        return topval;
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
            return true;
        return false;
    }
};
int main()
{

    Queue q;

    q.push(2);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(2);

    cout<<q.pop()<<endl;
    q.push(7);  
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}