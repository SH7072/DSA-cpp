// Ordered sets
//  Unique elements, implemented using balanced BST
//  Elements in sorted order,
//  random access not possible in O( 1) or O( logn)
//  Time- insertion-O(logn)
//  Deletion- O(LogN)
//  Lower/Upper Bound- O(LogN)


#include <bits/stdc++.h>

using namespace std;

int main()
{

    set<int> s;

    // insertion
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(2); // duplicate not possible

    // print
    // ascending order
    // for (auto i : s)
    //     cout << i << " ";
    // cout << endl;

    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    cout << endl;

    // descending

    for (auto i = s.rbegin(); i != s.rend(); i++)
        cout << *i << " ";
    cout << endl;

    // size
    cout << s.size() << endl;

    // coustom comparator

    set<int, greater<int>> s1;
    s1.insert(54);
    s1.insert(1);
    s1.insert(7);
    s1.insert(13);
    s1.insert(1);
    s1.insert(7);
    for (auto i = s1.begin(); i != s1.end(); i++)
        cout << *i << " ";
    cout << endl;

    // lower bound upper bound

    cout << *s.lower_bound(2) << endl;
    cout << *s.lower_bound(3) << endl;
    cout << *s.upper_bound(3) << endl;
    cout << *s.upper_bound(4) << endl;
    cout << (s.upper_bound(2) == s.end()) << endl;

    //erase
    s.erase(2);//to erase element
    s.erase(s.begin());//to erase its pointer

    for (auto i : s)
        cout << i << " ";
    cout << endl;
    return 0;
}
