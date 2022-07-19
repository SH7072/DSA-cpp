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

Node *searchInBST(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }

    if (root->data > key)
    {
        return searchInBST(root->left, key);
    }
    return searchInBST(root->right, key);
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
    //    insertBST(root,);

    // print

    if (searchInBST(root, 2))
    {
        cout << "found";
        cout << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}
