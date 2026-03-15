#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int minimizeMaxDifference(vector<int>& nums, int p)
{
    int n = nums.size();

    // Step 1: sort the array
    sort(nums.begin(), nums.end());

    vector<bool> used(n, false);

    int maxDiff = 0;

    // Step 2: form p pairs
    for(int pairCount = 0; pairCount < p; pairCount++)
    {
        int minDiff = INT_MAX;
        int first = -1;
        int second = -1;

        // find smallest difference pair among unused elements
        for(int i = 0; i < n; i++)
        {
            if(used[i]) continue;

            for(int j = i + 1; j < n; j++)
            {
                if(used[j]) continue;

                int diff = abs(nums[i] - nums[j]);

                if(diff < minDiff)
                {
                    minDiff = diff;
                    first = i;
                    second = j;
                }
            }
        }

        // mark chosen pair as used
        used[first] = true;
        used[second] = true;

        // track maximum difference among chosen pairs
        maxDiff = max(maxDiff, minDiff);
    }

    return maxDiff;
}

int main()
{
    vector<int> nums = {10, 1, 2, 7, 1, 3};
    int p = 3;

    cout << minimizeMaxDifference(nums, p) << endl;

    return 0;
} 