#include <bits/stdc++.h>

using namespace std;

int main()
{

      string s;
    getline(cin, s);
    cout<< s<<endl;
    string s2= "jood ";
    s.append(s2);
    s.assign("nh");
    s.at(3);//get element at 3rd posn
    s.begin();//return iterator pointing to first char
    s.clear();//empties string
    s.compare(s2);
    //returns 0 if both strings equal
    //    >0 for s >s2&
    //  <0 for s<s2.
    
    cout<<s<<endl;
    return 0;
}