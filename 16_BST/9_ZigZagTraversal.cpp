// logic :- use 2 stack currLvl& nextLvl
// var leftToRight
// if var leftToRight false ,push left child then right child
// else push right child then left child
//Time :O(n)
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

void zigZagTraversal(Node *root)
{
    stack<Node *> currLvl;
    stack<Node *> nextLvl;

    bool leftToRight = true;

    currLvl.push(root);

    while (!currLvl.empty())
    {
        if (root == NULL)
        {
            return;
        }
        Node *temp = currLvl.top();
        currLvl.pop();

        if (temp)
        {
            cout << temp->data << " ";
            if (leftToRight)
            {
                if (temp->left)
                {
                    nextLvl.push(temp->left);
                }
                if (temp->right)
                {
                    nextLvl.push(temp->right);
                }
            }

            // Right to Left
            else
            {
                if (temp->right)
                {
                    nextLvl.push(temp->right);
                }
                if (temp->left)
                {
                    nextLvl.push(temp->left);
                }
            }
        }
        if (currLvl.empty())
        {
            leftToRight = !leftToRight;
            swap(currLvl, nextLvl);
        }
    }
}

int main()
{

    Node *root = new Node(10);

    root->left = new Node(8);
    root->left->left = new Node(5);
    root->left->right = new Node(9);
    /*
             10
           /    \
          8      15
         / \    /  \
        5   9  12   21
              /  \
             11  14

    */
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(21);

    root->right->left->left = new Node(11);
    root->right->left->right = new Node(14);

    // print

    zigZagTraversal(root);
    cout << endl;

    return 0;
}