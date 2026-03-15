/*
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.



Example 1:

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1




*/

#include <bits/stdc++.h>
using namespace std;

int solveRec(vector<int> &nums, int k)
{
    // base case
    if (k == 0)
    {
        return 0;
    }

    if (k < 0)
    {
        return INT_MAX;
    }

    int mini = INT_MAX;
    // rec relation

    for (int i = 0; i < nums.size(); i++)
    {
        int ans = solveRec(nums, k - nums[i]);

        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }

    return mini;
}

int solveDPmemo(vector<int> &nums, vector<int> &dp, int k)
{
    // base case
    if (k == 0)
        return 0;

    if (k < 0)
        return INT_MAX;

    // check stored ans
    if (dp[k] != -1)
    {
        return dp[k];
    }

    // rec relations
    int mini = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        int ans = solveDPmemo(nums, dp, k - nums[i]);

        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }

    dp[k] = mini;
    return dp[k];
}

int main()
{
    vector<int> nums = {1, 2, 5};
    int k = 11;
    vector<int> dp(k + 1, -1);
    int ans = solveDPmemo(nums, dp, k);
    cout << ans;
    return 0;
}
