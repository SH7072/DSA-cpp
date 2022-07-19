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
int searchPos(int arr[], int start, int end, int val)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}
Node *constructTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    int curr = preorder[idx];
    idx++;

    if(start>end)
    {
        return NULL;
    }

    Node *node = new Node(curr);
    if (start == end)
    {
        return node;
    }
    int pos = searchPos(inorder, start, end, curr);

    node->left = constructTree(preorder, inorder, start, pos - 1);
    node->right = constructTree(preorder, inorder, pos + 1, end);

    return node;
}
void inorderPrint(Node *root)
{   
    if(root==NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->data<<" ";
    inorderPrint(root->right);
}

int main()
{

    Node *root;
    int preorder[] = {1, 2, 4, 8, 5};
    int inorder[] = {4, 2, 1, 5, 8};
    root = constructTree(preorder, inorder, 0, 4);
    inorderPrint(root);
    return 0;
}