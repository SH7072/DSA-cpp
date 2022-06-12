// Problem: Given a maze(2D matrix) with obstacles, starting from (0,0) you have to
// reach (n-1, n-1). If you are currently on (x,y), you can move to (x+1,y) or (x,y+1).
// You can not move to the walls.


#include <bits/stdc++.h>

using namespace std;

bool canMove(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int **arr, int x, int y, int n, int **ansArr)
{

    if (x == n - 1 && y == n - 1)
    {
        ansArr[x][y]=1;
        return true;
    }

    if (canMove(arr, x, y, n))
    {
        ansArr[x][y] = 1;
        if (ratInMaze(arr, x + 1, y, n, ansArr))
        {
            return true;
        }
        if (ratInMaze(arr, x, y + 1, n, ansArr))
        {
            return true;
        }
        ansArr[x][y] = 0; //Backtracking
        return false;
    }
    return false;
}
int main()
{

    int n;
    cin >> n;

    // dynamic arr for input matrix
    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // dynamic arr for solution matrix

    int **ansArr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        ansArr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ansArr[i][j] = 0;
        }
    }
            cout<<endl;

    if (ratInMaze(arr, 0, 0, n, ansArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<< ansArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}