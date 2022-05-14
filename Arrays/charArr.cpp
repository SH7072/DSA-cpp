#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    
    //print character array

    char arr[50]="Hello";
    int i=0;
    while (arr[i]!='\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    */
    
    //i/o char arr
    
    // char arr[50];
    // cin>>arr;
    // cout<<arr[3];
    
    //check palindrome

    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check=true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] !=arr[n-1-i])
        {
            check=false;
            break;
        }
        
    }
    if (check)
    {
        cout<<"It's a Palindrome";
    }
    else
    {
        cout<<"It's not a Palindrome";

    }
    
    

    return 0;
}