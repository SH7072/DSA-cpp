//Greatest common divisor of a and b(HCF).

#include <bits/stdc++.h>

using namespace std;


int divisibility(int n, int a,int b){

    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int gcd(int a,int b){

    while (b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    
return a;

}
int main()
{

    int a,b;
    cin >> a>>b;
    
    // cout<<divisibility(n,a,b);
    cout<<gcd(a,b)<<endl;
    return 0;
}