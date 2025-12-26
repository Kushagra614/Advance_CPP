// # 3SUM

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> bruteForce(vector<int>&nums)
{
    int n = nums.size();
    vector<vector<int>>ans;
    set<vector<int>>res;
    for(int i = 0; i< n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            for(int k = j+1; k < n; k++)
            {
                if(nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int>temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    res.insert(temp);
                }
            }
        }
    }

    for(auto &i : res)
    {
        ans.push_back(i);
    }
    return ans;

}

vector<vector<int>> optApp(vector<int>& nums)
{
    int n = nums.size();
    vector<vector<int>>ans;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n ; i++)
    {
        if(i>0 && nums[i] == nums[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while(j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0) j++;
            else if (sum > 0) k--;
            else 
            {
                vector<int>temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                //now how to iterate
                j++;
                k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int>nums = {-1,0,1,2,-1,-4};
    // vector<vector<int>> res = bruteForce(nums);
    vector<vector<int>> res = optApp(nums);

    for(auto &it : res)
    {
        for(auto ik : it)
        {
            cout<< ik << " ";
        }
    }

    return 0;
}