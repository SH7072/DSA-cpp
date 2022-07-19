

#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int value)
{
    node *n = new node(value);
    n->next = head;
    head = n;
}

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

int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }

    return l;
}

node *appendKNodes(node *&head, int k)
{

    node *tail = head;

    node *newHead;
    node *newTail;
    int l = length(head);
    int count = 1;
    k = k % l;

    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }
        if (count == l - k + 1)
        {
            newHead = tail;
        }

        tail = tail->next;
        count++;
    }

    newTail->next = NULL;

    tail->next = head;

    return newHead;
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

int main()
{

    node *head = NULL;

    int arr[] = {2, 4, 6, 8, 1, 4, 5};
    for (int i = 0; i < 7; i++)
    {
        insertAtTail(head, arr[i]);
    }

    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 6);
    // insertAtTail(head, 7);
    // insertAtTail(head, 4);

    display(head);

    insertAtHead(head, 46);

    display(head);

    cout << length(head) << endl;

    node *newHead = appendKNodes(head, 2);

    display(newHead);

    return 0;
}