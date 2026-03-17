#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    int n = nums.size();
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    unordered_map<int, int> mp;
    vector<int> ans;

    for (auto &i : nums)
    {
        mp[i]++;
    }

    for (auto &i : mp)
    {
        int freq = i.second;
        int val = i.first;
        pq.push({freq, val});
        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    while (!pq.empty())
    {
        auto topp = pq.top();
        int val = topp.second;
        ans.push_back(val);
        pq.pop();
    }

    return ans;
}

int main()
{
    vector<int>nums = {1,2,1,2,1,2,3,1,3,2};
    int k = 2;
    vector<int>res = topKFrequent(nums, k);
    for(auto &i : res)
    {
        cout<<i<<" ";
    }
    return 0;
}