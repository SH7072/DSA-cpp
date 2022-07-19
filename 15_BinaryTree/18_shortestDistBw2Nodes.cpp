// Find the dist b/w 2 nodes in a binary tree.
// The dist between 2 nodes is the minimum
// number of edges to traverse to reach from
// one node to another.
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

Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *leftLca = LCA(root->left, n1, n2);
    Node *rightLca = LCA(root->right, n1, n2);

    if (leftLca && rightLca)
    {
        return root;
    }

    if (leftLca != NULL)
    {
        return leftLca;
    }
    return rightLca;
}

int findDist(Node *lca, int k, int dist)
{
    if (lca == NULL)
    {
        return -1;
    }
    if (lca->data == k)
    {
        return dist;
    }
    int left = findDist(lca->left, k, dist + 1);
    if (left != -1)
    {
        return left;
    }
    return findDist(lca->right, k, dist + 1);
}

int distBwNodes(Node *root, int n1, int n2)
{
    Node *lca = LCA(root, n1, n2);

    int d1 = findDist(lca, n1, 0);
    int d2 = findDist(lca, n2, 0);

    return d1 + d2;
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

    /*
                1
              /  \
            2      3
           / \    / \
          4   5  6   7
                      \
                      10
    */

    cout << distBwNodes(root, 2, 5) << endl;
    cout << distBwNodes(root, 4, 6) << endl;
    cout << distBwNodes(root, 4, 10) << endl;

    return 0;
}