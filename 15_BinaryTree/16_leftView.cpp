// Time:- O(n)

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

void leftView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 1; i <= n; i++)
        {
            Node *curr = q.front();
            q.pop();

            if (i == 1)
            {
                cout << curr->data << " ";
            }
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}
// method 2
vector<int> leftView2(Node *root)
{
    if (!root)
    {
        return {};
    }
    vector<int> ans;
    queue<pair<Node *, int>> q;
    int val = 1;
    q.push({root, 1});
    ans.push_back(root->data);
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        Node *curr = it.first;
        int lvl = it.second;
        if (lvl != val)
        {
            val = lvl;
            // cout<<curr->data;
            ans.push_back(curr->data);
        }
        if (curr->left)
        {
            q.push({curr->left, lvl + 1});
        }
        if (curr->right)
        {
            q.push({curr->right, lvl + 1});
        }
    }
    return ans;
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
    leftView(root);
    return 0;
}
