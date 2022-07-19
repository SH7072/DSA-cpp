

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

void intersect(node* &head1,node* &head2,int pos){

    node* temp1=head1;
   
    while (pos)
    {
        pos--;
        temp1=temp1->next;
    }
    
    node* temp2=head2;
    while (temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    
    temp2->next=temp1;
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


    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 6);
    insertAtTail(head1, 7);
    insertAtTail(head1, 4);
    insertAtTail(head1, 8);

    display(head1);

    insertAtHead(head1, 46);
    
    insertAtHead(head2, 12);
    insertAtHead(head2, 9);

    display(head2);

    cout << length(head1)<<" "<<length(head2) << endl;

    intersect(head1,head2,4);

    cout << length(head1)<<" "<<length(head2) << endl;
    
    display(head1);
    
    display(head2);


    return 0;
}