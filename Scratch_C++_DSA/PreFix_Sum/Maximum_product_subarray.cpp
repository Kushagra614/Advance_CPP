#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums)
{
    int n = nums.size();
    int pre = 1;
    int curr = 1;
    int suff = 1;
    int maxPro = INT_MIN;
    if(nums.size() == 0) return 0;
    
    for(int i = 0; i< n; i++)
    {
        if(suff == 0)
        {
            suff = 1;
        }
        if(pre == 0)
        {
            pre = 1;
        }
        
        
        pre *= nums[i];
        suff *= nums[n-i-1];
        maxPro = max(maxPro, max(suff, pre));
       
    }
    
    return maxPro;
}

int main()
{
    vector<int>nums = {-2, -3, -4};
    int ans = solve(nums);
    cout<<ans;
    
}