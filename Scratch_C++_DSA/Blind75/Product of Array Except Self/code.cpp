#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pre = 1;
        int suff = 1;
        vector<int>ans(n,1);

        //cal the pre
        for(int i = 0; i < n; i++)
        {
            ans[i] = pre;
            pre *= nums[i];
        }

        for(int j = n-1; j >= 0; j--)
        {
            ans[j] *= suff;
            suff *= nums[j];
        }

        return ans;
    }

int main(){
   vector<int>nums = {1,2,3,4}; 
   vector<int>ans = productExceptSelf(nums);
   for(auto &i : ans)
   {
    cout<<i<<" ";
   }
   return 0;
}