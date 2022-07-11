// Contains unique elements
//  implemented using hashing
//  Elements are not in sorted order
//  random access not possible
//  insertion -O(1) in avg, worst case O(n)
//  deletion -O(1) in avg, worst case O(n)
//  lower/upper bound-does not exist as elements are not sorted

#include <bits/stdc++.h>

using namespace std;

int main()
{

    unordered_set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}