// Find the number of ways to tile the floor with 1x2

#include <bits/stdc++.h>

using namespace std;

int tiling(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    
    return tiling(n-1)+tiling(n-2);
}
int main()
{

    cout << tiling(4);

    return 0;
}