#include <bits/stdc++.h>

using namespace std;


int countSetBit(int n){
    int count=0;
    while (n)
    {
        n=n&n-1;
        count++;
    }
    return count;
}

int main()
{

    cout<<countSetBit(8)<<endl;
    return 0;
}