// Given n items, each item has a certain value and weight. We have to maximize the
//  value of the objects we can accommodate in a bag of weight W.
//  Idea: For each item, we have two choices, either to include it or exclude it.

#include <bits/stdc++.h>

using namespace std;

int knapsack(int value[], int itWt[], int n, int Wtkn)
{

    if (n == 0 || Wtkn == 0)
    {
        return 0;
    }

    if (itWt[n - 1] > Wtkn)
    {
        return knapsack(value, itWt, n - 1, Wtkn);
    }

    return max(knapsack(value, itWt, n - 1, Wtkn - itWt[n - 1]) + value[n - 1], knapsack(value, itWt, n - 1, Wtkn));
}

int main()
{

    int itWt[]={10,20,30};
    int value[]={100,50,150};
    cout<<knapsack(value,itWt,3,50);
    return 0;
}