/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.



Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation:
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.




nums[i] + nums[j] = -nums[k]
left = i+1 , r = n-1
trip = nums[i] + nums[left]+  nums[right]

*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        if(i>0 && nums[i] == nums[i-1]) i++;

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            if (nums[i] + nums[j] + nums[k] == 0)
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);

                while(j<k && nums[j] == nums[j+1]) j++;
                while(j<k && nums[k] == nums[k-1]) k--;

                j++;
                k--;
            }
            else if(nums[i] + nums[j] + nums[k] < 0)j++;
            
            else{
                k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, 4};
    vector<vector<int>> ans = solve(nums);
    for (auto num : ans)
    {
        for (auto i : num)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
