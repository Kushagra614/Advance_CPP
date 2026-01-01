#include<bits/stdc++.h>
using namespace std;

/*
we have to fnd the subarray with the largest sum

nums = [5,4,-1,7,8]
ans = 23 (sum of the whole arr)

BF -> we would find the sum of all subarr and the return the maxSum

OPT APP -> 
*/

int BF(vector<int>&nums)
{
    int n = nums.size();
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += nums[j];
            if(sum > maxSum) maxSum = sum;
        }
    }
    return maxSum;
}

int optApp(vector<int>nums)
{
    int n = nums.size();
    int maxSum = INT_MIN;
    int currSum = nums[0];
    for(int i = 1; i < n; i++)
    {
        currSum += nums[i];
        if(currSum > maxSum) maxSum = currSum;
        if(currSum < 0) currSum = 0;
    }
    return maxSum;
}

int main()
{
    vector<int>nums = {5,4,-1,7,8};
    cout<<optApp(nums);
    return 0;
}