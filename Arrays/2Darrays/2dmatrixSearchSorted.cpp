// Integers in each row are sorted in ascending from left to right.
//  Integers in each column are sorted in ascending from top to bottom.

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> arr[i][j];
        }
    }
    int ele = 0;
    cout << "\nEnter element to search :";
    cin >> ele;

    // Brute Force approach
    /*

        bool isFound = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == ele)
                {
                    cout << i << " " << j << endl;
                    isFound = true;
                }
            }
        }

        if (isFound)
        {
            cout << "Element Found " << endl;
        }
        else
        {
            cout << "Element not Found " << endl;
        }

    */
    // Optimization considering sorted.

    bool isFound = false;
    int row = 0;
    int column = m - 1;
    while (row < n && column >= 0)
    {
        if (arr[row][column] == ele)
            isFound = true;
        else if (arr[row][column] > ele)
        {
            column--;
        }
        else
        {
            row++;
        }
    }

    if (isFound)
    {
        cout << "Element Found " << endl;
    }
    else
    {
        cout << "Element not Found " << endl;
    }

    return 0;
}