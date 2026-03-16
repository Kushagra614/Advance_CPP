#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& nums, int target)
{
    int n = nums.size();
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]] = i;
        }

        for(int i = 0; i < n; i++)
        {
            int k = target - nums[i];
            if(mp.find(k) != mp.end())
            {
               int num = mp[k]; 
               if(num != i){
               res.push_back(i);
               res.push_back(mp[k]);
               break;
               }
               
            }
        }

        return res;
}

int main(){
   
    vector<int>nums = {2,7,11,15};
    int target = 9;
    vector<int>ans = solve(nums, target);
    for(auto i : ans)
    {
        cout<<i<<" ";
    } 
   return 0;
}