//insert and delete from both start and end

#include <bits/stdc++.h>

using namespace std;

int main()
{

    deque<int> dq;
    dq.push_back(5);
    dq.push_front(2);
    dq.push_back(4);
    dq.push_front(1);

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    
    dq.pop_back();
    
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    
    dq.pop_front();
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    
    dq.pop_front();
    
    
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    
    
    dq.pop_back();
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}