// Write a program to find a unique number in an array where all numbers
// except one, are present thrice.
// LOGIC
// 1. We will maintain an array of 64 size which will store the number of times i th
// bit has occurred in the array.
// 2. Take the modulo of each element of this array with 3. Resultant array will
// represent the binary representation of the unique number.
// 3. Convert that binary number to decimal number and output it.

#include <bits/stdc++.h>

using namespace std;

bool getBit(int n, int pos)
{

    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{

    return (n | (1 << pos));
}

int findThreeUniqueNos(int arr[], int n)
{

    int result = 0;

    for (int i = 0; i < 64; i++)
    {

        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }

    return result;
}

int main()
{

    int arr[10] = {2, 5, 7, 2, 2, 5, 7, 5, 11, 7};

    cout << findThreeUniqueNos(arr, 10)<<endl;
    return 0;
}

