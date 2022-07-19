//  Q- for given root nodes of 2 bst print if the bst are identical or not
// Identical BST are structurally identical and have equal value for the nodes
// in  the same structure.
// App:- if both empty return true
// -if both non empty
//  check that the data at nodes is equal
//  check if left subtrees are same
//  check if right subtrees are same
// -if above 3 are true return true,
//  else return false.

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

bool isIdentical(Node *root1, Node *root2)
{

    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if (root1 == NULL || root2 == NULL)
    {
        return false;
    }
    else
    {
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);

        if (cond1 && cond2 && cond3)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    /*
                6
               / \
              3    8
             /\   / \
            2  5  7

    */
    Node *root1 = new Node(6);
    root1->left = new Node(3);
    root1->left->left = new Node(2);
    root1->left->right = new Node(5);
    root1->right = new Node(8);
    root1->right->left = new Node(7);

    /**/
    Node* root2=new Node(5);

    // if (isIdentical(root1, root1))
    if (isIdentical(root1, root2))
    {
        cout << "Identical" << endl;
    }
    else
    {
        cout << "Not identical" << endl;
    }

    return 0;
}
