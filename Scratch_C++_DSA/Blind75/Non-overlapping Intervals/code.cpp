#include<bits/stdc++.h>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<int>ans;
        ans = intervals[0];
        int count = 0;

        for(int i = 1; i < n ;i++)
        {
            if(ans[1] > intervals[i][0])
            {
                count++;
                ans[0] = min(ans[0], intervals[i][0]);
                ans[1] = min(ans[1], intervals[i][1]);
            }
            else
            {
                ans[0] = intervals[i][0];
                ans[1] = intervals[i][1];
            }
        }
        return count;
    }

int main(){

   vector<vector<int>>intervals = {{1,2},{2,3},{3,4},{1,3}};
   int ans = eraseOverlapIntervals(intervals);
   cout<<ans; 
   return 0;
}