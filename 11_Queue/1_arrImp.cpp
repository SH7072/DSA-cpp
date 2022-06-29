#include <bits/stdc++.h>

using namespace std;

#define n 50
class Queue
{

    int front;
    int back;
    int *arr;

public:
    Queue()
    {

        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {

            cout << "Queue Overflow" << endl;
            return;
        }

        back++;
        arr[back] = x;

        if (front == -1)
        {

            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue Empty!!" << endl;
            return;
        }
        else
        {
            front++;
        }
    }

    int peek()
    {

        if (front == -1 || front > back)
        {
            cout << "No Element in Queue" << endl;
            return -1;
        }
        
            return arr[front];
        
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            cout << "No Element in Queue" << endl;
            return true;
        }
        
            return false;
    }
};

int main()
{

    Queue q;
    q.push(1);
    q.push(2);
    q.push(6);
    q.push(28);
    q.push(24);
    q.push(3);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;

    return 0;
}