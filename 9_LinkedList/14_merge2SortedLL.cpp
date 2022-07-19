// Time : O(n+m)
// iterative

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

void intersect(node *&head1, node *&head2, int pos)
{

    node *temp1 = head1;

    while (pos)
    {
        pos--;
        temp1 = temp1->next;
    }

    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}

node *merge2SortedLL(node *&head1, node *&head2)
{

    node *ptr1 = head1;
    node *ptr2 = head2;

    node *dummyNode = new node(-1);
    node *ptr3 = dummyNode;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }

        ptr3 = ptr3->next;
    }

    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }

    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }

    return dummyNode->next;
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

    node *head1 = NULL;
    node *head2 = NULL;

    int arr1[] = {1, 3, 4, 6, 7, 9};

    int n = sizeof(arr1) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        insertAtTail(head1, arr1[i]);
    }

    int arr2[] = {2, 5, 8, 11};

    int n1 = sizeof(arr2) / sizeof(int);

    for (int i = 0; i < n1; i++)
    {
        insertAtTail(head2, arr2[i]);
    }

    display(head1);

    display(head2);

    node *newHead = merge2SortedLL(head1, head2);

    display(newHead);

    return 0;
}