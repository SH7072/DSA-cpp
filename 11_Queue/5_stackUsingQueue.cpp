// Method 1-
// Using 2 queues:
// Push heavy -
#include <bits/stdc++.h>

using namespace std;

class Stack
{

    queue<int> q1;
    queue<int> q2;
    int N;

public:
    Stack()
    {
        N = 0;
    }

    void push(int val)
    {

        q2.push(val);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop()
    {
        q1.pop();
        N--;
    }

    int top()
    {
        return q1.front();
    }
    int size()
    {
        return N;
    }
};

int main()
{

    Stack s;

    s.push(2);
    s.push(5);
    s.push(7);
    s.push(8);
    s.push(72);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    s.pop();
    cout<<s.size();

    return 0;
}