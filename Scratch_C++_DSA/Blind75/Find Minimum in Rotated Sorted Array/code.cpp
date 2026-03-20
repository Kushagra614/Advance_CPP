#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return nums[0];
        int i = 0;
        int j = n-1;
        int mini = INT_MAX;

        while(i<=j)
        {
            int mid = (i+j)/2;

            if(nums[mid] >= nums[i])
            {
                int ans = nums[i];
                mini = min(ans, mini);
                i = mid+1;
            }
            else
            {
                int ans = nums[mid];
                mini = min(ans, mini);
                j = mid-1;

            }
        }
        return mini;
    }

int main(){
    vector<int>nums = {4,5,6,7,1,1,2};
    cout<<findMin(nums);
   return 0;
}