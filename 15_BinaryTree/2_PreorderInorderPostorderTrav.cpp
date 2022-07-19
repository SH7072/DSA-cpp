#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(struct Node *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);

    cout << root->data << " ";
}

int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);

    /*
        1
       / \
      2   5
    */

    root->left->left = new Node(6);
    root->left->right = new Node(8);

    /*

         1
        / \
       2   5
      / \
     6   8

    */
    root->right->left = new Node(7);
    root->right->right = new Node(9);

    /*

         1
        / \
       2   5
      / \  / \
     6  8  7  9

    */
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);

    return 0;
}