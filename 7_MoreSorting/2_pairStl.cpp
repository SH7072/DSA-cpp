#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2){


    return p1.first<p2.first;
}

int main()
{
    /*
        pair<int,char> v;

        v.first=3;
        v.second='g';

    */

    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};

    vector<pair<int, int>> p;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        p.push_back(make_pair(arr[i], i));
    }


    //  for (auto it : p)
    // {

    //     cout << it.first << " ";
    // }cout<<endl;
    // for (auto it : p)
    // {
    //     cout << it.second << " ";
    // }cout<<endl;

    sort(p.begin(),p.end(),compare);

    for (int i = 0; i < p.size(); i++)   
    {

        arr[p[i].second]=i;
    }
    // for (int i = 0; i < p.size(); i++)
    // {
    //     cout<<arr[i];
    // }
    

    // display pair
    // for (auto it : p)
    // {

    //     cout << it.first << " ";
    // }cout<<endl;
    // for (auto it : p)
    // {
    //     cout << it.second << " ";
    // }cout<<endl;


    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}