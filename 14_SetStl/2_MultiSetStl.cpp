// Ordered sets-Multiset
//  Can contain duplicate elements, implemented using balanced BST
//  Elements in sorted order,
//  random access not possible in O( 1) or O( logn)
//  Time- insertion-O(logn)
//  Deletion- O(LogN)
//  Lower/Upper Bound- O(LogN)

#include <bits/stdc++.h>

using namespace std;

int main()
{

    multiset<int> s;

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

    s.erase(3); // removes all occurences of 3

    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
     s.erase(s.find(2));//deletes 1st occurence of 2
     //** here we have  to note that 2 is present in the set else it will give error
     

    return 0;
}