// TWO SUM - II

#include <bits/stdc++.h>
using namespace std;

/*
[2,7,11,15]   k = 9
2 + 7 = 9
ans = 2-> 0 + 7-> 1 => [0,1] -> NOW AS THE ARR IS 1-INDEXED
ANS => [1,2]

brute force -> iterate thru all the ele and check if sum = k, if yes return the indices
*/

//------BRUTE FORCE---------[O(n^2)]
vector<int> bruteForce(vector<int> &nums, int k)
{
    int n = nums.size();
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j< n; j++)
        {
            int sum = nums[i] + nums[j];
            if(sum == k)
            {
                return {i+1,j+1};
            }
        }
    }

    return {};
}


//-----OPTIMIZED APPROACH----------------

vector<int> optApprach(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int,int>mp;

    for(int i = 0; i < n; i++)
    {
        int need = k - nums[i];
        if(mp.find(need) != mp.end())
        {
            return {mp[need]+1, i+1};
        }

        mp[nums[i]] = i;
    }
    
    return {};
}



int main()
{

    vector<int>nums = {2,3,4};
    int k = 6;
    // vector<int>ans = bruteForce(nums, k);
    vector<int>ans = optApprach(nums, k);
    for(auto i: ans)
    {
        
        cout<<i<< " ";
    }
    // return 0;
}