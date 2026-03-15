#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int maxSumSubarray(vector<int>& nums, int k)
{
    int n = nums.size();
    int maxSum = 0;

    for(int i = 0; i <= n-k; i++)
    {
        int currentSum = 0;

        for(int j = i; j < i + k; j++)
        {
            currentSum += nums[j];
        }

        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int opt(vector<int>& nums, int k)
{
    int n = nums.size();
    int maxSum = 0;
    int sum = 0;

    for(int i = 0; i < k; i++)
    {
        sum += nums[i];
    }
    maxSum = max(sum, maxSum);


    for(int i = k; i < n; i++)
    {
        sum += nums[i];
        sum = sum - nums[i-k];
        maxSum = max(sum, maxSum);
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {2,1,5,1,3,2};
    int k = 3;

    int result = opt(nums, k);

    cout << "Maximum Sum of Subarray of size " << k << " = " << result << endl;

    return 0;
}