/*You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.



Example 1:

Input: nums = [1,2,3,1]
Output: 4

//approach
every house -> 2 choices 
1) rob it -> i + 2
2) skip it -> i + 1

opt


*/

#include<bits/stdc++.h>
using namespace std;

int solve(int i, vector<int>& nums, vector<int>& dp)
{
    //base case
    if(i == nums.size())
    {
        return 0;
    }

    //check stired ans 
    if(dp[i] != -1)
    {
        return dp[i];
    }

    //rec realtion
    int rob = nums[i] + solve(i+2, nums, dp);
    int skip = solve(i+1, nums, dp);

    return dp[i] = max(rob, skip);
}

int main()
{
    vector<int>nums = {100};
    vector<int>dp(nums.size(), -1);
    int ans = solve(0, nums, dp);
    cout<<ans;
}