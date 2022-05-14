// Largest Word in a sentence

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    cin.ignore();
    
    char arr[n + 1];
    cin.getline( arr,n);
    cin.ignore();


    int i=0;
    int curLen=0;
    int maxLen=0;
    int start=0;
    int maxst=0;
    while (1)
    {
        if (arr[i]==' ' || arr[i]=='\0')
        {
            if (curLen>maxLen)
            {
                maxLen=curLen;
            }
                curLen=0;
            
        }
        else
            curLen++;

        
        if (arr[i]=='\0')
        {
            break;
        }
        
        i++;
    }
    
    cout<<maxLen<<endl;
 
    return 0;
}