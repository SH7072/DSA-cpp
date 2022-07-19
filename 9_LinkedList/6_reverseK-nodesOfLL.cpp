// Given a linked list and an integer K. Reverse the nodes of a linked list k at a time
// and return its modified list. If the number of nodes is not a multiple of K then
// left-out nodes, in the end, should remain as it is

// Time Complexity = O(n)

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

node *reverseLL(node *&head)
{

    node *previous = NULL;
    node *current = head;
    node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous; // head of reversed linked list
}

node *reverseLLRecursive(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = reverseLLRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

node *reverseKNodes(node *&head, int k)
{

    node *previousPtr = NULL;
    node *currentPtr = head;
    node *nextPtr;

    int count = 0;
    while (currentPtr != NULL && count < k)
    {
        nextPtr = currentPtr->next;
        currentPtr->next = previousPtr;

        previousPtr = currentPtr;
        currentPtr = nextPtr;

        count++;
    }
    if (nextPtr != NULL)
    {
        head->next = reverseKNodes(nextPtr, k);
    }
    return previousPtr;
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

    int k=3;
    node *ne = reverseKNodes(head,k);
    display(ne);

    return 0;
}