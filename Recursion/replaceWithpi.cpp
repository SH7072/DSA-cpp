// replace pi in the string with 3.14 whenever it appears

#include <bits/stdc++.h>

using namespace std;

void replacePi(string str){
    
    if (str.length()==0)
    {
        return ;
    }
    if (str[0]=='p'&& str[1]=='i')
    {
        cout<<"3.14";
        replacePi(str.substr(2));
    }else
    {
        cout<<str[0];
        replacePi(str.substr(1));

    }
    
    
    
}

int main()
{
    replacePi("pistafpigagpppiiipi");

    return 0;
}