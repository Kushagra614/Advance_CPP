#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(int i, vector<vector<int>>& jobs, vector<int>& startTimes, vector<int>& dp)
{
    if (i >= jobs.size())
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int nextIndex = lower_bound(startTimes.begin(), startTimes.end(), jobs[i][1]) - startTimes.begin();

    int take = jobs[i][2] + solve(nextIndex, jobs, startTimes, dp);
    int skip = solve(i + 1, jobs, startTimes, dp);

    return dp[i] = max(take, skip);
}

int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit)
{
    int n = startTime.size();

    vector<vector<int>> jobs;

    for (int i = 0; i < n; i++)
        jobs.push_back({startTime[i], endTime[i], profit[i]});

    sort(jobs.begin(), jobs.end());

    vector<int> startTimes;

    for (auto &job : jobs)
        startTimes.push_back(job[0]);

    vector<int> dp(n, -1);

    return solve(0, jobs, startTimes, dp);
}

int main()
{
    vector<int> startTime = {1,3,6};
    vector<int> endTime = {3,5,9};
    vector<int> profit = {50,20,100};

    cout << jobScheduling(startTime, endTime, profit);

    return 0;
}