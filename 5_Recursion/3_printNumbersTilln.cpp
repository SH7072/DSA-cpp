// Print the numbers till in ascending and descending order

#include <bits/stdc++.h>

using namespace std;
int printDescending(int n)
{
    if (n == 0)
    {
        cout << 0 << " ";
        return 0;
    }
    cout << n << " ";
    return printDescending(n - 1);
}

void printAscending(int n)
{
    if (n == 0)
    {
        cout << 0 << " ";
        return;
    }
    printAscending(n - 1);
    cout << n << " ";
}
int main()
{

    int n;
    cin >> n;

    printDescending(n);
    cout << endl;
    printAscending(n);
    return 0;
}