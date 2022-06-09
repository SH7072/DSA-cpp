//total numbers less than n which are divisible by a&b.

#include <bits/stdc++.h>

using namespace std;


int divisibility(int n, int a,int b){

    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int main()
{

    int n,a,b;
    cin >>n>> a>>b;
    
    cout<<divisibility(n,a,b);
    return 0;
}