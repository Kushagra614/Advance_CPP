/*
we have to fnd the subarray with the largest sum

nums = [5,4,-1,7,8]
ans = 23 (sum of the whole arr)

BF -> we would find the sum of all subarr and the return the maxSum

OPT APP -> 
*/


#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&nums)
{
    int n = nums.size();
    if(n == 0) return 0;
    int maxSum = INT_MIN;
    
    for(int i = 0; i< n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += nums[j];
            maxSum = max(sum, maxSum);
        }
    }
    
    return maxSum;
}

int solveopt(vector<int>& nums)
{
    int n = nums.size();
    int curr = 0;
    int maxSum = INT_MIN;
    
    for(int i = 0; i< n; i++)
    {
        if(curr<0)
        {
            curr = 0;
        }
        
        curr = curr + nums[i];
        maxSum = max(curr, maxSum);
    }
    
    return maxSum;
}

int main()
{
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = solveopt(nums);
    cout<<ans;
    
    return 0;
}