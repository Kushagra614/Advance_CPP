#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int start, int target, vector<int>& candidates,
         vector<int>& curr, vector<vector<int>>& result)
{
    if(target == 0)
    {
        result.push_back(curr);
        return;
    }

    for(int i = start; i < candidates.size(); i++)
    {
        if(candidates[i] > target)
            break;

        curr.push_back(candidates[i]);
        dfs(i, target - candidates[i], candidates, curr, result);
        curr.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target)
{
    sort(candidates.begin(), candidates.end());

    vector<vector<int>> result;
    vector<int> curr;

    dfs(0, target, candidates, curr, result);

    return result;
}

int main()
{
    vector<int> candidates = {2,3,6,7};
    int target = 7;

    vector<vector<int>> ans = combinationSum(candidates, target);

    for(auto &v : ans)
    {
        for(int x : v)
            cout << x << " ";
        cout << endl;
    }
}