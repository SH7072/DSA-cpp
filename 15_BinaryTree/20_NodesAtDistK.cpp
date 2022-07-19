// Print all the nodes at distance k

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

// Case 1:- targent node in subtree of that node

void printSubtreeNodes(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data<<" ";
    }
    printSubtreeNodes(root->left, k - 1);
    printSubtreeNodes(root->right, k - 1);
}

// case 2 target node on ancestor

int printNodesAtK(Node *root, Node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    if (root == target)
    {
        printSubtreeNodes(root, k);
        return 0;
    }

    int dl = printNodesAtK(root->left,target, k);

    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printSubtreeNodes(root->right, k - dl - 2);
        }
        return dl + 1;
    }

    int dr = printNodesAtK(root->right,target, k);

    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printSubtreeNodes(root->left, k - dr - 2);
        }
        return dr + 1;
    }

    return -1;
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

    printNodesAtK(root,root->left, 1);

    return 0;
}