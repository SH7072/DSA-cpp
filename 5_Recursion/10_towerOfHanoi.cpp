// Tower of Hanoi is a mathematical puzzle where we have three rods and n disks.
// The objective of the puzzle is to move the entire stack to another rod, obeying the
// following simple rules:
// 1) Only one disk can be moved at a time.
// 2) Each move consists of taking the upper disk from one of the stacks and placing
//    it on top of another stack i.e. a disk can only be moved if it is the uppermost disk
//    on a stack.
// 3) No disk may be placed on top of a smaller disk.

#include <bits/stdc++.h>

using namespace std;

    void towerOfHanoi(int n, char src,char dest,char helper){

        if (n==0)
        {
            return;
        }
        
        towerOfHanoi(n-1,src,helper,dest);
        cout<<"Move from "<<src<<" to "<<dest<<endl;
        towerOfHanoi(n-1,helper,dest,src);
        // cout<<"Move from "<<helper<<" to "<<dest<<endl;
    }

int main()
{

   towerOfHanoi(6,'A','C','B');
    return 0;
}