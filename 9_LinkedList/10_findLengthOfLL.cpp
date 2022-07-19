

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

   
int length(node* head){
    int l=0;
    node* temp=head;
    while (temp!=NULL)
    {
        l++;
        temp=temp->next;    
    }
    return l;
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

    cout<<length(head)<<endl;

    return 0;
}