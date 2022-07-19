// Given a binary tree, flatten it into linked list
// in place. After flattening, left of each node
// should point to null and right should contain next
// node in preorder sequence.(use only Linked List)

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

void printInorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void flatten(Node *root)
{
    if (root == NULL || (root->left == NULL & root->right == NULL))
    {
        return;
    }
    if (root->left != NULL)
    {
        flatten(root->left);

        Node *temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node *t = root->right;
        while (t->right != NULL)
        {
            t = t->right;
        }
        t->right = temp;
    }

    flatten(root->right);
}

int main()
{

    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(10);

    /*  BINARY TREE

                1
              /  \
            2      3
           / \    / \
          4   5  6   7
                      \
                      10
    */

    printInorder(root);
    cout << endl;

    flatten(root);

    printInorder(root);
    cout << endl;

    return 0;
}