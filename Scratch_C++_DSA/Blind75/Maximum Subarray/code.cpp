#include<bits/stdc++.h>
using namespace std;


    int maxSubArray(vector<int>& nums) {
        //store size
        int n = nums.size();
        //dec variables
        int sum = 0;
        int maxSum = INT_MIN;
        //iteration
        for(int i = 0; i < n ; i++)
        {
            sum += nums[i];
            maxSum = max(maxSum, sum);
            if(sum < 0)
            {
                //reset
                sum = 0;
            }
            
        }
        return maxSum;
    }

int main(){

   vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
   cout<<maxSubArray(nums);
   return 0;
}