/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?



Example 1:

Input: n = 2
Output: 2



*/

#include <bits/stdc++.h>
using namespace std;

int solverRec(int n)
{
    // base case
    if (n == 0 || n == 1)
        return 1;

    int count = 0;

    int one = solverRec(n - 1);
    int two = solverRec(n - 2);
    count = one + two;

    return count;
}

int solveDPmemo(int n, vector<int> &dp)
{
    // base case
    if (n == 0 || n ==1)return 1;

    //store the ans
    if(dp[n] != INT_MAX)
    {
        return dp[n];
    }

    //rec relation
    
    int one = solveDPmemo(n-1, dp);
    int two = solveDPmemo(n-2, dp);
    dp[n] = one + two;


    return dp[n];
}

int main()
{

    int n = 2;
    vector<int> dp(n + 1, INT_MAX);
    int ans = solveDPmemo(n, dp);
    cout << ans;

    return 0;
}