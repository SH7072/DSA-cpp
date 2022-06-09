#include <bits/stdc++.h>

using namespace std;

bool checkPrimes(int n)
{

    for (int i = 2; i*i <= n; i ++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void getPrimeNumbersTillN(int n){
    for(int i=2;i<=n;i++){
        if(checkPrimes(i)){
            cout<<i<<" ";
        }
    }
}

int main()
{

    int n;
    cin >> n;

    cout<<checkPrimes(n)<<endl;
    getPrimeNumbersTillN(n);

    return 0;
}