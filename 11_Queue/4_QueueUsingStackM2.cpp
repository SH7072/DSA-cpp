// Using function call stack
//  less memory used as we are using only 1 stack
#include <bits/stdc++.h>

using namespace std;

class Queue
{

    stack<int> s1;

public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s1.empty())
        {
            cout << "Queue Empty!!" << endl;
            return -1;
        }

        int x = s1.top();

        if (s1.empty())
        {
            return x;
        }

        int item = pop();
        s1.push(x);

        return item;
    }

    bool empty()
    {

        if (s1.empty())
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

    q.push(72);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}