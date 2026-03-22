#include<bits/stdc++.h>
using namespace std;

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int h = n-1;

        while(l <= h)
        {
            int mid = (l+h)/2;
            if(nums[mid] == target) return mid;
            else if(nums[l] <= nums[mid])
            {
                if(target >= nums[l] && target < nums[mid])
                {
                    h = mid-1;
                }
                else
                {
                    l = mid+1;
                }
            }
            else
            {
                if(target <= nums[h] && target > nums[mid])
                {
                    l = mid+1;
                }
                else
                {
                    h = mid-1;
                }
            }
        }
        return -1;
    }

int main(){
   
    vector<int>nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<search(nums, target);
   return 0;
}