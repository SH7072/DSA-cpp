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

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }

    return root;
}

void printInorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

Node *inorderSuccessor(Node *root)
{
    Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr;
}

// Delete in BST
Node *deleteInBst(Node *root, int key)
{
    if (root->data > key)
    {
        root->left = deleteInBst(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = deleteInBst(root->right, key);
    }
    else
    { // key==root->data

        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        Node *temp = inorderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteInBst(root->right, temp->data);
    }

    return root;
}

int main()
{

    Node *root = NULL;

    root = insertBST(root, 5);

    insertBST(root, 2);
    insertBST(root, 7);
    insertBST(root, 4);
    insertBST(root, 1);
    insertBST(root, 3);

    // print
    printInorder(root);
    cout << endl;

    // root = deleteInBst(root, 4);
    root = deleteInBst(root, 2);

    printInorder(root);
    cout << endl;

    return 0;
}
