#include<bits/stdc++.h>
 
 
using namespace std;


#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

struct TreeNode
{

    int data;
    struct TreeNode* left;
    struct TreeNode* right;
    
    TreeNode(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }


};


int main()
{

TreeNode* root=new TreeNode(9);

vector<int>arr;

for (auto &it: arr)
{
 cin >> it;
}


return 0;
}