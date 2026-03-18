#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> BF(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    st.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum > 0) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }



int main(){

    vector<int>nums = {-1,0,1,2,-1,-4};
    vector<vector<int>>ans = BF(nums);
    for(auto &i : ans)
    {
        for(auto &j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
   return 0;
}