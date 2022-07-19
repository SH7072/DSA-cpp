//  In a doubly linked list, each node will
// also store the link to the previous node.

#include <bits/stdc++.h>

using namespace std;

class node
{

public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};



    void insertAtHead(node *&head, int val)
    {

        node *n = new node(val);

        n->next = head;
        if (head != NULL)
        {
            head->prev = n;
        }

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

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }


    void display(node* head){

        node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
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

    return 0;
}




