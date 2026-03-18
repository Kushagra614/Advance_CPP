#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int n = height.size();
    int amt = 0;
    int ans = INT_MIN;
    int i = 0;
    int j = n - 1;
    int minWall = INT_MAX;

    while (i < j)
    {
        minWall = min(height[i], height[j]);
        int dist = j - i;
        amt = minWall * dist;
        ans = max(amt, ans);

        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}

int main()
{
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height);

    return 0;
}