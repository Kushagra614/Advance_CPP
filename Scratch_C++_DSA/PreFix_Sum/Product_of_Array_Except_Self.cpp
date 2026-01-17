/*
nums = [1,2,3,4]
ans = [2*3*4, 1*3*4,1*2*4, 1*2*3]
ans = [24, 12, 8, 6]

brute force
-> Have a product of the whole array and then divide it by nums[i]

OPT
->




*/

#include <bits/stdc++.h>
using namespace std;

vector<int> BFsolve(vector<int> &nums)
{
    int pro = 1;
    for (int i : nums)
    {
        pro *= i;
    }
    vector<int> ans(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = pro / nums[i];
    }
    return ans;
}

vector<int> OPTsolve(vector<int> &nums)
{
    int n = nums.size();
    vector<int>ppro(n,1);
    vector<int>spro(n,1);
    vector<int>ans(n,1);

    for(int i = 1; i< n; i++)
    {
        ppro[i] = ppro[i-1] * nums[i-1];
    }

    for(int i = n-2; i>= 0; i--)
    {
        spro[i] = spro[i+1] * nums[i+1];
    }

    for(int i = 0; i< n; i++)
    {
        ans[i] = ppro[i] * spro[i];
    }
    return ans;
}   

int main()
{

    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = OPTsolve(nums);
    for (auto i : res)
    {
        cout << i << " ";
    }

    // return 0;
}