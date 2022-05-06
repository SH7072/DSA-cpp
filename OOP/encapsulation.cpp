#include <bits/stdc++.h>

using namespace std;

class encapsulation
{
private:
    int a;
    void funca()
    {
        cout << a << endl;
    }

public:
    int b;
    void funcb()
    {
        cout << b << endl;
    }
};

int main()
{
    encapsulation obj1;

    // obj1.funca();  // cant access since it is a private member of class
    obj1.funcb();     // can be access since it is a public member of class

    return 0;
}