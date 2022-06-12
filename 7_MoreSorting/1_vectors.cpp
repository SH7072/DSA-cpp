#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    // to access
    //  method 1:-
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
    cout << endl;
    // m2- through iterator (a pointer)

    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // method 3
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    v.pop_back();
    for (auto it : v)
    {
        cout << it << " ";
    }cout<<endl;
    v.pop_back();

    v.pop_back();
    for (auto it : v)
    {
        cout << it << " ";
    }cout<<endl;



    vector<int>v2(3,20);
    //50 50 50

    swap(v,v2);

     for (auto it : v2)
    {
        cout << it << " ";
    }cout<<endl;
    
     for (auto it : v)
    {
        cout << it << " ";
    }cout<<endl;

    sort(v.begin(),v.end());
    
    
    return 0;
}