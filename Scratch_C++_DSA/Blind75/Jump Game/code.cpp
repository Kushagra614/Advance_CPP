#include <bits/stdc++.h>
using namespace std;

int canJump(vector<int> &nums)
{
    int maxJ = 0;
    int n = nums.size();

    for (int i = 0; i < n-1; i++)
    {
        int jump = 0;
        jump = i + nums[i];
        maxJ = max(maxJ, jump);
        cout<<"MaxJ after the updation where i = "<<i<<" and maxJ is "<<maxJ<<endl;
        if (maxJ >= n - 1)
            return maxJ;
    }
    return maxJ;
}

int main()
{
    vector<int>nums = {3,2,1,0,4};
    cout<<canJump(nums);
    return 0;
}