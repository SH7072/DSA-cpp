#include <bits/stdc++.h>

using namespace std;

class node
{


public:
    node *next;
    int data;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{

    node *front;
    node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue Empty" << endl;
            return;
        }
        node *toDelete = front;
        front = front->next;
        delete toDelete;
    }

    int peek()
    {

        if (front == NULL)
        {
            cout << "Queue Empty" << endl;
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    Queue q;
    q.push(1);
    q.push(3);
    q.push(6);
    q.push(8);
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