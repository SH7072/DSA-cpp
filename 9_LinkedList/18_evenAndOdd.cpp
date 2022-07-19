// Put Even position nodes after Odd position nodes⭐
// Given a singly linked list, group all odd position nodes together followed by the
// even position nodes.
// You should try to do it in place. The program should run in O(1) space complexity
// and O(nodes) time complexity.

#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {

        data = value;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{

    node *n = new node(val);

    n->next = head;

    head = n;
}

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

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

void deleteHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node *&head, int val)
{

    if (head == NULL)
    {

        return;
    }
    if (head->next == NULL)
    {
        deleteHead(head);
        return;
    }

    node *temp = head;
    node *toDelete;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
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

void evenAfterOdd(node *&head)
{

    node *odd = head;
    node *even = head->next;
    node* evenStart=head->next;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    
    }

    odd->next=evenStart;


    if (odd->next==NULL)
    {
        even->next=NULL;
    }
    
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 1);

    insertAtTail(head, 2);

    insertAtTail(head, 3);

    insertAtTail(head, 4);

    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);

    evenAfterOdd(head);
    display(head);

    return 0;
}
