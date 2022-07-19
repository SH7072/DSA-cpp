
// Time: O(n)
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

// Check if Bst

bool isBST(Node *root, Node *min = NULL, Node *max = NULL)
{

    if (root == NULL)
    {
        return true;
    }

    if (min != NULL && root->data <= min->data)
    {
        return false;
    }

    if (max != NULL && root->data >= max->data)
    {
        return false;
    }

    bool leftVal = isBST(root->left, min, root);
    bool rightVal = isBST(root->right, root, max);

    return leftVal && rightVal;
}

int main()
{

    Node *root1 = new Node(1);
    root1->left = new Node(3);
    root1->left = new Node(2);
    root1->left->right = new Node(5);

    Node *root2 = new Node(4);
    root2->left = new Node(2);
    root2->right = new Node(5);

    //    insertBST(root,);

    // print

    if (isBST(root1))
    {
        cout << "Valid BST";
        cout << endl;
    }
    else
    {
        cout << "Invalid BST" << endl;
    }
    if (isBST(root2))
    {
        cout << "Valid BST";
        cout << endl;
    }
    else
    {
        cout << "Invalid BST" << endl;
    }

    return 0;
}