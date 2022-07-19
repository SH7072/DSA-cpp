 // Diff b/w height of left sub tree and right
// subtree is less than equal to 1
// mod(leftht-rightht)<=1

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


int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) + 1;
}

bool isBalanced(Node *root,int* height)
{

    if (root == NULL)
    {
        return true;
    }

    int lh=0,rh=0;
    if(isBalanced(root->left,&lh)==false){

        return false;
    }
    if(isBalanced(root->right,&rh)==false)
    {
        return false;
    }

    *height=max(lh,rh)+1;

    if(abs(lh-rh)<=1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
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

    /*
                1
              /  \
            2      3
           / \    / \
          4   5  6   7
    */
   int height=0;
    cout<<isBalanced(root,&height)<<endl;

    Node* root2=new Node(1);
    root2->left=new Node(2);
    root2->left->left=new Node(3);

    cout<<isBalanced(root2,&height)<<endl;
    
    return 0;
}