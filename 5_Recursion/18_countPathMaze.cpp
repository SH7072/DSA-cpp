// Given a 2D grid, find the number of ways to reach (n-1, n-1).
//  You can go to (i,j) from (i-1,j) and (i,j-1).

#include <bits/stdc++.h>

using namespace std;

int countPathMaze(int n, int i, int j)
{ // maze of nXn

    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i>n-1||j>n-1)
    {
        return 0;
    }
      
    return countPathMaze(n,i+1,j)+ countPathMaze(n,i,j+1);
}

int main()
{
    cout<<countPathMaze(3,1,1);
    return 0;
}