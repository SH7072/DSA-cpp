#include <bits/stdc++.h>

using namespace std;
// Sum till n
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}
// power p of n or n^p

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return (n * power(n, p - 1));
}

// factorial
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
// fibonacci
int fibonacci(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{

    int n;
    int p;
    cin >> n  ;

    // cout << sum(n) << endl;
    // cout << power(n, p) << endl;
    // cout << factorial(n) << endl;
    cout << fibonacci(n) << endl;
    return 0;
}