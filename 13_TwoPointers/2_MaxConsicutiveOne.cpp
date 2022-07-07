// Return the length of longest contoguous
// subarray having only 1s.

#include <bits/stdc++.h>

using namespace std;

int maxCons1(vector<int> arr)
{
    int n = arr.size();

    int count=0;
    int i(0);
    int ans=0;
    while (i<n)
    {
        if(arr[i]==0){
            count=0;
        }
        else{
            count++;
            ans=max(ans,count);
        }
        i++;
    }
    

    return ans;
    }

int main()
{

    vector<int> arr = {1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1};

    cout << maxCons1(arr) << endl;

    return 0;
}