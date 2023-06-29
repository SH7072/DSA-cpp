// problem
/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.
*/
// MOORE's Voting Algorithm
/*
This can be solved by Moore's voting algorithm.
Basic idea of the algorithm is if we cancel out each occurrence of an
element e with all the other elements that are different from e then
e will exist till end if it is a majority element. Below code loops
through each element and maintains a count of the element that has the
potential of being the majority element. If next element is same then
increments the count, otherwise decrements the count. If the count
reaches 0 then update the potential index to the current element and
 sets count to 1.
*/
// Time: O(n)->single pass
// Space: O(1)

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int majorityElement(vector<int>& nums) {
        int candidate=0;
        int votes=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(votes==0)
            {
                candidate=nums[i];
                votes++;
            }
            else if(candidate==nums[i])
            {
                votes++;
            }
            else{
                votes--;
            }
        }
        return candidate;
    }

int main()
{

    vector<int> arr;

    for (auto &it : arr)
    {
        cin >> it;
    }
    majorityElement(arr);

    return 0;
}