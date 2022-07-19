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

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}


void deleteAtHead(node *&head)
{

    if (head==NULL)
    {
        return;
    }
    
    node* temp=head;
    node *toDelete=head;

    while (temp->next!=head)
    {
        temp=temp->next;

    }
    
    temp->next=temp->next->next;

    head=head->next;

    delete toDelete;


}


void deleteAtPos(node *&head, int pos)
{

    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;
    int count = 1;

    node *toDelete;

    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }

    toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

void display(node *head)
{

    node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main()
{

    node *head = NULL;

    int arr1[] = {1, 3, 4, 6, 7, 9};

    int n = sizeof(arr1) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        insertAtTail(head, arr1[i]);
    }

    display(head);
    insertAtHead(head, 12);

    display(head);

    deleteAtPos(head,4);
    display(head);
    deleteAtHead(head);

    display(head);

    return 0;
}
