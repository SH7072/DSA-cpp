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

Node *postorderBuild(int postorder[], int inorder[], int start, int end)
{

    if (start > end)
    {

        return NULL;
    }

    static int idx = end;
    int val = postorder[idx];
    idx--;

    Node *node = new Node(val);

    if (start == end)
    {
        return node;
    }

    int pos = searchPos(inorder, start, end, val);

    node->right = postorderBuild(postorder, inorder, pos + 1, end);
    node->left = postorderBuild(postorder, inorder, start, pos - 1);
    return node;
}
void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main()
{

    Node *root;
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    root = postorderBuild(postorder, inorder, 0, 4);
    inorderPrint(root);
    return 0;
}