#include <bits/stdc++.h>

using namespace std;

bool powerOfTwo(int n)
{
    // n= 1000 
    // n-1=0111
    // if n is exponent of 2 then n&(n-1)=0000
    // !(n& n-1) will return true if inner expression is zero ie n is  exponent of 2
    // n&&!(n& n-1) for case if n=0;
    return ( n&&!(n & (n - 1)));
}
int main()
{

    // int n;
    // cin >> n;
    cout << powerOfTwo(1) << endl;

    return 0;
}