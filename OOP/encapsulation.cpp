#include <bits/stdc++.h>

using namespace std;


class encapsulation
// Encapsulation=> hide "sensitive" data from users. 
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
    // To modify the value of a private member use public get and set methods.
    void set_a(int s){
        a=s;
    }
    int get_a(){
       return a; 
    }
};

int main()
{
    encapsulation obj1;

    // obj1.funca();  // cant access since it is a private member of class
    obj1.funcb();     // can be access since it is a public member of class

    obj1.set_a(20);
   cout<<obj1.get_a();

    return 0;
}