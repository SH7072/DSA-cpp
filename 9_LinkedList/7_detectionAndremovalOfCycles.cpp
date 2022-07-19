// *****Cycle Detection[without map]*****
// Floyd’s cycle detection
// Also know as hare and tortoise method, and slow and fast pointer method.
// Idea: Slow and pointers are initially at the start. Slow takes one step. Fast takes
// two-step at a time.
// Time Complexity: O(n)

#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int v)
    {
        data = v;
        next = NULL;
    }
};

void insertAtTail(node *&head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node *&head, int value)
{
    node *n = new node(value);
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void makeCycles(node *&head, int pos)
{

    node *temp = head;
    node *startCycle; // cycle will start from this node

    int count = 0;

    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startCycle = temp; // pointing start cycle to node from where cycle will start
        }

        temp = temp->next;
        count++;
    }
    // after completion of loop temp will pointing to last node and temp->next will point to null
    temp->next = startCycle; // pointing last node to start of cycle to form a cycle
}

bool detectCycles(node *&head)
{

    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}

void removeCycles(node *&head)
{

    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            break;
        }
    }
    // here we are moving fast and slow by 1 bcoz the distance frm 
    // head to start Cycle ptr and slow to start cycle is same.
    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next=NULL;
    
}

int main()
{

    node *head = NULL;

    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 4);
    display(head);

    insertAtHead(head, 46);
    display(head);

    int k = 3;

    makeCycles(head, k);
    cout << detectCycles(head)<<endl;
    
    removeCycles(head);
    cout << detectCycles(head)<<endl;
    display(head);

    return 0;
}