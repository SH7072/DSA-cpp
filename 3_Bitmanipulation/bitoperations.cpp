#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int pos)
{ // getting bit of num n at position pos n=0111 pos= 2
    // genetating new no with bit at pos equal to 1 rest zero new num=0100
    // taking and(bit wise) with num to find the bit  (n&num)=0100

    return (n & (1 << pos)) != 0; // if(n&(1<<pos))!=0 then return 1 else 0
}

int setBit(int n, int pos)
{   // setting bit at position pos equal to 1 {n=1001 pos=2}
    // genetating new no with bit at pos equal to 1(1<<pos)new bit[ 0100]
    //Take or of n and generated bit(1001&0100=1101)
    return (n | (1 << pos));
}
int clearBit(int n, int pos)
{   // clears the bit at position pos
    //n=0111 pos 2
    // create mask bit =1011(negation of 1<<pos)
    // take and of n& mask ( 0111 & 1011 => ans= 0011)
    // makes the bit at pos =0 w/o changing other bits
    int mask = ~(1 << pos);
    return (n & mask);
}
int updateBit(int n, int pos, bool value)
{
    // clear bit at pos &update the bit with value 
    //create mask bit
    // take and with n

    int mask=~(1<<pos);
    n=n&mask;
    int val = value<<pos;
        n = n | val;
    return n;
}
int main()
{

    // int n
    // cin >> n;

    cout << getBit(7, 3) << endl;
    // cout<<setBit(7,4)<<endl;
    // cout<<clearBit(7,2)<<endl;
    cout << updateBit(7, 2, 0) << endl;

    return 0;
}