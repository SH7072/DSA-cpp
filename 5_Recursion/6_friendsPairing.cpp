// There are n friends, we have to find all the pairings possible. Each person can be
//  paired with only one person or does not pair with anyone.

#include <bits/stdc++.h>

int friendsPairing(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    return friendsPairing(n-1)+friendsPairing(n-2)*n-1;

}

using namespace std;

int main()
{

    cout<<friendsPairing(3);

    return 0;
}