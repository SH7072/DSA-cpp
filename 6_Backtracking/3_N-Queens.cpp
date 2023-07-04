#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

bool isSafe(vector<vector<int>>&a,int x,int y,int n)
{
    for (int i = 0; i < x; i++)
    {
        if(a[i][y]==1)
        {
            return false;
        }
    }
    int row=x;
    int col=y;
    while(row>=0&&col>=0)
    {
        if(a[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }
    
    row=x;
    col=y;
     while(row>=0&&col<n)
    {
        if(a[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool nQueens(vector<vector<int>>&a,int cnt,int n)
{
    if(cnt>=n)
    {
        return true;
    }
    for(int col=0;col<n;col++)
    {
        if(isSafe(a,cnt,col,n))
        {
            a[cnt][col]=1;
            if(nQueens(a,cnt+1,n))
            {
                return true;
            }
            a[cnt][col]=0;
        }

    }
    return false;
}
int main()
{

    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n,0));

    if(nQueens(a,0,n))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}