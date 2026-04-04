#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        // BF

        //size store (nums)
        int n = nums.size();
        int ans = 0;
        //put all the nums in the mp 
        unordered_map<int,int>mp;
        for(auto &i : nums)
        {
            mp[i]++;
        }

        for(int i = 0 ; i <= n; i++)
        {
            if(mp.find(i) == mp.end())
            {
                ans = i;
            }
        }
       return ans;

       //OPT
       
    }

int main(){

   vector<int>nums = {3,0,1};
   cout<<missingNumber(nums)<<endl; 
   return 0;
}