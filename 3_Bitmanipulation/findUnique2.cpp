// Write a program to find 2 unique numbers in an array where all numbers
// except two, are present twice.

// Logic
// 1. Take XOR of all the elements and let that xor value be x. All the repeating
// elements will get nullified and xor of only two unique elements will last. (as
// a⊕a = 0).
// 2. There will be at least one bit set in x. Using that set bit, divide the original
// set of numbers into two sets.
// a. First set which contains all the elements with that bit set.
// b. Second set which contains all the elements with that bit unset.
// 3. Take xor of both the sets individually, and let those xor values be x1 and x2.
// 4. Voila, x1 and x2 are our unique numbers. Reason: both the above sets
// contain one of the unique elements and rest elements of the sets occur
// twice which will get nullified after ⊕ operation.

#include <bits/stdc++.h>

using namespace std;

int setBit(int n, int pos)
{
    n = n >> pos;
    return n & 1;
}
int getSetBit(int xorSum)
{

    int pos = 0;
    int setBit = 0;
    while (setBit != 1)
    {
        setBit = xorSum & 1;
        xorSum = xorSum >> 1;
        pos++;
    }
    return pos;
}

void findTwoUniqueNos(int arr[], int n)
{

    int xorSum;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }

    int pos = getSetBit(xorSum);

    int newxor;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1) == 1)
        {
            newxor = newxor ^ arr[i];
        }
    }
    int num2 = xorSum ^ newxor;
    cout << num2 << " " << newxor << endl;
}
// METHOD 2 same Ques 
    vector<int> singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        long long xr = 0;
        for (int i = 0; i < n; i++)
        {
            xr ^= nums[i];
        }
        int a = 0;
        int b = 0;
        long long prod = xr & (-xr);
        // cout<<prod;
        for (int i = 0; i < n; i++)
        {
            int c = prod & nums[i];
            if (c == 0)
            {
                a ^= nums[i];
            }
            else
            {
                b ^= nums[i];
            }
        }
        return {a, b};
    }

int main()
{

    int arr[10] = {2, 5, 7, 8, 2, 5, 7, 8, 11, 3};

    cout << setBit(4, 3) << endl;
    findTwoUniqueNos(arr, 10);
    return 0;
}