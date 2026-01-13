#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int k)
{
    unordered_map<int,int>mp;
    mp[0] = 1;
    int sum = 0;
    int count = 0;
    
    for(int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        int rem = sum % k;
        if(mp.count(rem))
        {
            count += mp[rem];
        }
        
        mp[rem]++;
    }
    return count;
}

int main()
{
    vector<int>nums = {1,2,3,4,5,6};
    int k = 3;
    int res = solve(nums, k);
    cout << res;
    
}