#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<vector<int>>& nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>>res;
    vector<int>ans;
    ans = nums[0];

    for(int i = 1; i < n; i++)
    {
        if(ans[1] >= nums[i][0] && ans[0] <= nums[i][1])
        {
            ans[0] = min(ans[0], nums[i][0]);
            ans[1] = max(ans[1], nums[i][1]);
        }
        else{
            res.push_back(ans);
            ans = nums[i];
        }
    }
    res.push_back(ans);
    return res;
}

int main()
{
    vector<vector<int>> nums = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>>ans = solve(nums);
    for(auto &i : ans)
    {
        for(auto &j : i)
        {
            cout<<j<<" ";
        }
        
    }
    return 0;
}