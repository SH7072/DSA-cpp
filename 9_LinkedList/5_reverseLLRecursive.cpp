//recursive
//Idea: We are at the head, recursively reverse the remaining list.
// The (head->next) is the next node, this node should be the second last node
// in the reversed list. head would be the last node in the reversed list, so its
// next should be NULL. And then we will return the reversed list

//Time Complexity = O(n)


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

bool search(node *head, int key)
{

    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
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

    if (head==NULL||head->next==NULL)
    {
        return head;
    }
    
    node* newhead=reverseLLRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newhead;

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

    node *ne = reverseLLRecursive(head);
    display(ne);

    return 0;
}