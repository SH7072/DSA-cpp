/*
//alt main not working properly olf approch
    int m,n;
       cin>>m>>n;
    int a[m];
       for (int i=0; i<m; i++) {
           cin>>a[i];
              int b[a[i]];
           for (int j=0; j<a[i]; j++) {
              cin>>b[j];
           }
               cout<<&b;
       }

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int m,n;
       
       cin>>n>>m;
    vector<vector<int>> a(n);
     
    
       for (int i=0; i<n; i++) {
        int length;
        cin>>length;
        a[i].resize(length);     
        for(int j=0; j<length; j++) {   
              cin>>a[i][j];
           }
       }
       for (int k=0; k<m; k++) {
       int i,j;
       cin>>i>>j;
       cout<<a[i][j]<<endl;
       }
    return 0;
}

