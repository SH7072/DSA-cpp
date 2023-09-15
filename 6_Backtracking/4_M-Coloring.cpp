
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    bool check(bool mat[101][101],int idx,int col,vector<int>&colors,int n)
{
    
    if(colors[idx]!=0&&col!=colors[idx])
    {
        return false;
    }
    for(int i=0;i<n;i++)
    {
        if(mat[idx][i])
        {

        if(colors[i]==col)
        {
            return false;
        }
        }
    }
    return true;

}
bool isPossible(bool mat[101][101],int m,vector<int>&colors,int idx,int n)
{

    if(idx==n)
    {
        return true;
    }
    for(int col=1;col<=m;col++)
    {
        if(check(mat,idx,col,colors,n))
        {
            colors[idx]=col;
            if(isPossible(mat,m,colors,idx+1,n))
            {
                return true;
            }
            colors[idx]=0;
        }
    }
    return false;

}

    bool graphColoring(bool mat[101][101], int m, int n) {
         
    vector<int>colors(n,0);
    if(isPossible(mat,m,colors,0,n))
    {
        return true;
    }
    return false;     
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

