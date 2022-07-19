#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void assignPointers(Node *root, Node **first, Node **mid, Node **last, Node **prev)
{
    if (root == NULL)
    {
        return;
    }

    assignPointers(root->left, first, mid, last, prev);

    if (*prev && root->data < (*prev)->data)
    {
        if (!*first)
        {
            *first = *prev;
            *mid = root;
        }
        else
        {
            *last = root;
        }
    }
    *prev = root;
    assignPointers(root->right, first, mid, last, prev);
}

void restoreBST(Node *root)
{
    Node *first = NULL;
    Node *mid = NULL;
    Node *last = NULL;
    Node *prev = NULL;

    assignPointers(root, &first, &mid, &last, &prev);

    // case 1
    if (first && last)
    {
        swap(&(first->data), &(last->data));
    }
    // case 2
    else if (first && mid)
    {
        swap(&(first->data), &(mid->data));
    }
}
void printInorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    
    printInorder(root->left);
    printInorder(root->right);
}
int main()
{
    /*
                6
                /\
                9 3
                /\ \
                1 4 13
    */
    Node *root = new Node(6);

    root->left=new Node(9);
    root->right=new Node(3);
    root->left->left=new Node(1);
    root->left->right=new Node(4);
    root->right->right=new Node(13);

    printInorder(root);
    cout<<endl;
    restoreBST(root);
    printInorder(root);
    return 0;
}