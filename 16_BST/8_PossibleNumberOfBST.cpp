// catalan applications

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

vector<Node *> constructTree(int start, int end)
{
    vector<Node *> tree;

    if (start > end)
    {
        tree.push_back(NULL);

        return tree;
    }

    for (int i = start; i <= end; i++)
    {
        vector<Node *> leftSubtree = constructTree(start, i - 1);
        vector<Node *> rightSubtree = constructTree(i + 1, end);

        for (int j = 0; j < leftSubtree.size(); j++)
        {
            Node *left = leftSubtree[j];

            for (int k = 0; k < rightSubtree.size(); k++)
            {
                Node *right = rightSubtree[k];

                Node *node = new Node(i);

                node->left = left;
                node->right = right;

                tree.push_back(node);
            }
        }
    }

    return tree;
}

void printPreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main()
{

    vector<Node *> total = constructTree(1, 3);

    for (int i = 0; i < total.size(); i++)
    {   
        cout<<(i+1)<<" : ";
        printPreorder(total[i]);
        cout << endl;
    }

    return 0;
}