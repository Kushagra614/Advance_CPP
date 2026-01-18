#include<bits/stdc++.h>
using namespace std;

int BFsolve(vector<int>&nums, int k)
{
    int n = nums.size();
    int maxSum = INT_MIN;
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        int j = i;
        sum = 0;
        while(j-i+1 <= k && j < n)
        {
            sum += nums[j];
            if(sum > maxSum)
            {
                maxSum = sum;
            }
            j++;
        }
    }
    return maxSum;
}

int OPTsolve(vector<int>& nums, int k)
{
    int n = nums.size();;
    int maxSum = INT_MIN;
    int sum = 0;

    for(int i = 0; i < k; i++)
    {
        sum += nums[i];
    }

    maxSum = sum;

    for(int i = k; i < n; i++)
    {
        sum += nums[i];
        sum -= nums[i-k];
        maxSum = (maxSum < sum ? sum : maxSum);
    }

    return maxSum;

}


int main(){
    vector<int>nums = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    int ans = OPTsolve(nums, k);
    cout<<ans;
   return 0;
}