#include<bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>& nums){
    int n = nums.size();
    vector<int>ans(n,1);
    int pre = 1;
    int suf = 1;

    for(int i = 1; i < n; i++)
    {
        ans[i] *= pre;
        pre *= nums[i-1];
    }

    for(int i = n-1; i >= 0; i--)
    {
        ans[i] *= suf;
        suf *= nums[i];
    }

    return ans;
}
int main(){
    vector<int>nums = {1,2,3,4};
    vector<int>ans = solve(nums);
    for(auto i : ans)
    {
        cout<<i<<" ";
    }

   return 0;
}