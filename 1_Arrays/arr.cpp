#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr[5]={2,56,78,06,24};

int max=INT_MIN;
int min=INT_MAX;

//find max min of arr

for (int  i = 0; i < 5; i++)
{
    if (arr[i]>max)
    {
        max=arr[i];

    }else if (arr[i]<min)
    {
        min=arr[i];
    }
    
    
}
cout<<max<<" "<<min;
return 0;
}