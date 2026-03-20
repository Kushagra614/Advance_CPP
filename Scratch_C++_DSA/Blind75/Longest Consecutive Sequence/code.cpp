#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    // BF
    //     int n = nums.size();
    //     if(n == 0) return 0;
    //     sort(nums.begin(), nums.end());
    //     int maxCount = 1;
    //     int count = 1;

    //     for(int i = 0; i < n-1; i++)
    //     {
    //         int val = nums[i];
    //         if(val+1 == nums[i+1])
    //         {
    //             count++;
    //         }
    //         else if(val == nums[i+1])
    //         {
    //             continue;
    //         }
    //         else
    //         {
    //             count = 1;
    //         }
    //         maxCount = max(count, maxCount);
    //     }
    //     return maxCount;
    // }

    // opt
    unordered_set<int> st(nums.begin(), nums.end());
    if (nums.size() == 0)
        return 0;
    int count = 1;
    int maxCount = 1;
    for (auto num : st)
    {
        if (!st.count(num - 1))
        {
            int x = num;
            while (st.count(x + 1))
            {
                count++;
                x = x + 1;
            }
        }
        maxCount = max(maxCount, count);
        count = 1;
    }
    return maxCount;
}

int main()
{

    return 0;
}