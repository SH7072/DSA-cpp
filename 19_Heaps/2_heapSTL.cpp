// STL HEAPS (both min and max) by default max heap
// push pop-O(logn)
// top size-O(1)

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define ff = first
#define ss = second

int main()
{
    priority_queue<int, vi> pq;//max heap

    pq.push(2);
    pq.push(4);
    pq.push(3);

    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;

    // to make min heap
    priority_queue<int,vi,greater<int>>pqMin;
    pqMin.push(4);
    pqMin.push(2);
    pqMin.push(3);

    cout << pqMin.top() << endl;
    pqMin.pop();
    cout << pqMin.top() << endl;


    return 0;
}